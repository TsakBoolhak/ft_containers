#ifndef RBTree_HPP
# define RBTree_HPP

# include "rbt_iterator.hpp"
# include "rbt_const_iterator.hpp"
# include "rbt_node.hpp"
# include "reverse_iterator.hpp"

namespace ft {

	template < class T, class Value_Compare = std::less<T>, class Allocator = std::allocator< T > >
	class RBTree {

		public :

			typedef T												value_type;
			typedef Value_Compare									value_compare;
			typedef Allocator										allocator_type;
			typedef typename Allocator::reference					reference;
			typedef typename Allocator::const_reference				const_reference;
			typedef ft::rbt_iterator<T>								iterator;
			typedef ft::rbt_const_iterator<T>						const_iterator;
			typedef typename Allocator::size_type					size_type;
			typedef typename Allocator::difference_type				difference_type;
			typedef typename Allocator::pointer						pointer;
			typedef typename Allocator::const_pointer				const_pointer;
			typedef ft::reverse_iterator< iterator >				reverse_iterator;
			typedef ft::reverse_iterator< const_iterator >			const_reverse_iterator;
			typedef ft::Node<T>										Node;
			typedef std::allocator<Node>							node_allocator_type;

		protected :
		
			Node *				_root;
			size_type			_size;
			allocator_type		_alloc;
			node_allocator_type	_nodeAlloc;
			value_compare		_comp;

			typedef enum e_relativePos {

				LEFT = 0,
				RIGHT = 1
			} t_relativePos;

			void	adopt( Node * newParent, Node *child, t_relativePos position ) {

				if ( newParent == NULL )
					return;
				if ( position == LEFT )
					newParent->_left = child;
				else
					newParent->_right = child;
				if ( child == NULL )
					return ;
				else
					child->_parent = newParent;

				return;
			}

			void	leftRotate( Node * toRotate ) {

				if ( toRotate == NULL || toRotate->_right == NULL )
					return;

				Node *	parent = toRotate->_parent;
				Node *	child = toRotate->_right;

				if (  child->_left != NULL ) {

					adopt( toRotate, child->_left, RIGHT );
				}
				if ( parent == NULL ) {

					_root = child;
				}
				else if ( parent->_left == toRotate ) {

					adopt( parent, child, LEFT );
				}
				else {

					adopt( parent, child, RIGHT );
				}
				adopt( child, toRotate, LEFT );

				return;
			}

			void	rightRotate( Node *toRotate ) {

				if ( toRotate == NULL || toRotate->_left == NULL )
					return;

				Node * parent = toRotate->_parent;
				Node * child = toRotate->_right;

				if ( child->_right != NULL ) {

					adopt( toRotate, child->_right, LEFT );
				}
				if ( parent == NULL ) {

					_root = child;
				}
				else if ( parent->_right == toRotate ) {

					adopt( parent, child, RIGHT );
				}
				else {

					adopt( parent, child, LEFT );
				}
				adopt( child, toRotate, RIGHT);

				return;
			}

			void	leftRightRotate( Node *toRotate ) {

				if ( toRotate == NULL || toRotate->_right == NULL || toRotate->_parent == NULL )
					return ;

				Node * parent = toRotate->_parent;

				leftRotate( toRotate );
				rightRotate( parent );

				return ;
			}

			void	rightLeftRotate( Node * toRotate ) {

				if ( toRotate == NULL || toRotate->_left == NULL || toRotate->_parent == NULL )
					return ;

				Node * parent = toRotate->_parent;

				rightRotate( toRotate );
				leftRotate( parent );

				return ;
			}
		public :

			RBTree( Node  * root = NULL, size_type size = 0 ) : _root ( root ), _size ( size ), _alloc ( allocator_type() ), _nodeAlloc ( node_allocator_type() ), _comp ( value_compare() ) {

				if ( this->_root != NULL )
					this->_root->_color = Node::BLACK;
				return ;
			}

			Node *min() {

				Node * tmp = this->_root;
				
				while ( tmp && tmp->_left )
					tmp = tmp->_left;
				return tmp;
			}

			Node *max() {

				Node * tmp = this->_root;
				while (tmp && tmp->_right)
					tmp = tmp->_right;
				return tmp;
			}

			Node * newNode( T const & value, Node * parent ) {

				Node *	tmp = _nodeAlloc.allocate( 1 );
				_nodeAlloc.construct( tmp, Node( value, parent ) );

				return tmp;
			}

			void	insertFix( Node *toInsert ) {

				while ( toInsert->_parent && toInsert->_parent->_color == Node::RED ) {

					Node *parent = toInsert->_parent;
					Node *grandParent = parent != NULL ?	parent->_parent :
															NULL;

					if ( grandParent && parent == grandParent->_left ) {
						
						if ( grandParent->_right && grandParent->_right->_color == Node::RED ) {

							grandParent->_left->_color = Node::BLACK;
							grandParent->_right->_color = Node::BLACK;
							grandParent->_color = Node::RED;
							toInsert = grandParent;
						}
						else if ( parent->_right && parent->_right == toInsert ) {

							toInsert = parent;
							leftRotate( toInsert );
						}
						if ( toInsert->_parent )
							toInsert->_parent->_color = Node::BLACK;
						if ( toInsert->_parent && toInsert->_parent->_parent ) {

							toInsert->_parent->_parent->_color = Node::RED;
							rightRotate( toInsert->_parent->_parent );
						}
					}
					else {
						
						if ( grandParent->_left && grandParent->_left->_color == Node::RED ) {

							grandParent->_left->_color = Node::BLACK;
							grandParent->_right->_color = Node::BLACK;
							grandParent->_color = Node::RED;
							toInsert = grandParent;
						}
						else if ( parent->_left && parent->_left == toInsert ) {

							toInsert = parent;
							rightRotate( toInsert );
						}
						if ( toInsert->_parent )
							toInsert->_parent->_color = Node::BLACK;
						if ( toInsert->_parent && toInsert->_parent->_parent ) {

							toInsert->_parent->_parent->_color = Node::RED;
							leftRotate( toInsert->_parent->_parent );
						}
					}
					_root->_color = Node::BLACK;
				}
			}

			void	insert( T const & newValue ) {

				Node *	toInsert = newNode( newValue, NULL );

				if ( _root == NULL ) {

					_root = toInsert;
					_root->_color = Node::BLACK;
					return ;
				}

				Node *tmp = _root;
				Node *next = _comp( newValue, tmp->_value ) ?	tmp->_left :
																tmp->_right;
				while ( next != NULL ) {
					
					tmp = next;
					next = _comp( newValue, tmp->_value ) ?	tmp->_left :
															tmp->_right;
				}
				if ( _comp( newValue, tmp->_value ) ) {

					adopt(tmp, toInsert, LEFT);
				}
				else {

					adopt(tmp, toInsert, RIGHT);
				}
				insertFix(toInsert);

				return;
			}

			iterator	begin() {

				return iterator( this->min(), this->_root );
			}

			iterator	end() {

				return iterator ( NULL, this->_root );
			}

			const_iterator	begin() const {

				return const_iterator( this->min(), this->_root );
			}

			const_iterator	end() const {

				return const_iterator( NULL, this->_root );
			}

			reverse_iterator	rbegin() {

				return reverse_iterator( this->end() );
			}

			reverse_iterator	rend() {

				return reverse_iterator( this->begin() );
			}

			const_reverse_iterator rbegin() const {

				return const_reverse_iterator( this->end() );
			}

			const_reverse_iterator	rend() const {

				return const_reverse_iterator( this->begin() );
			}
	};
}

#endif

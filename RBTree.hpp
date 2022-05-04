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
			typedef ft::reverse_iterator< iterator >		reverse_iterator;
			typedef ft::reverse_iterator< const_iterator >	const_reverse_iterator;
			typedef ft::Node<T>										Node;

		protected :
		
			Node *	_root;

		public :

			RBTree( Node  * root = NULL ) : _root ( root ) {

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

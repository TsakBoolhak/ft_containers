#ifndef RBT_ITERATOR_HPP
# define RBT_ITERATOR_HPP

# include <cstddef>
# include <iterator>
# include "rbt_const_iterator.hpp"
# include "rbt_node.hpp"

namespace ft {

	template< typename T >
	class rbt_const_iterator;

	template< typename T >
	class rbt_iterator {

		public :

			typedef T									value_type;
			typedef std::ptrdiff_t						difference_type;
			typedef T*									pointer;
			typedef T&									reference;
			typedef std::bidirectionnal_iterator_tag	iterator_category;
			typedef ft::node<T>							node;

		protected :

			Node *	_current;
			Node *	_root;

		public :

			rbt_iterator( Node * node = NULL, Node * root = NULL ) : _current ( node ), _root ( root ) {

				return ;
			}

			rbt_iterator( rbt_iterator const & src ) : _current ( src.current ), _root ( src.root ) {

				return ;
			}

			~rbt_iterator() {

				return ;
			}

			Node *	getCurrent() const {

				return this->_current;
			}

			Node *	getRoot() const {

				return this->_root;
			}

			rbt_iterator &	operator=( rbt_iterator const & rhs ) {

				if ( this != &rhs ) {
					this->_current = rhs._current;
					this->_root = rhs._root;
				}
				return *this;
			}

			rbt_iterator &	operator++() {

				if ( _current == NULL )
					_current = min( _root );
				else if ( _current->_right )
					_current = _current->_right;;
				else if ( _current->_parent && _current == _current->_parent->_left )
					_current = _current->_parent;
				else if ( _current->_parent ) {

					while ( _current->_parent && _current == _current->_parent->_right )
						_current = _current->_parent;
					_current =  _current == _current->_parent->_left ?	_current->_parent :
																		NULL;
				}
				else
					current = NULL;
				return *this;
			}

			rbt_iterator	operator++( int ) {

				rbt_iterator	tmp = *this;
				++(*this);
				return tmp;
			}

			rbt_iterator &	operator--() {

				if ( _current == NULL )
					_current = min( _root );
				else if ( _current->_left )
					_current = _current->_left;;
				else if ( _current->_parent && _current == _current->_parent->_right )
					_current = _current->_parent;
				else if ( current->parent ) {

					while ( _current->_parent && _current == _current->_parent->_left )
						_current = _current->_parent;
					_current =  _current == _current->_parent->_right ?	_current->_parent :
																		NULL;
				}
				else
					current = NULL;
				return *this;
			}

			rbt_iterator	operator--( int ) {

				rbt_iterator	tmp = *this;
				--(*this);
				return tmp;
			}

			pointer	operator->() {

				return &(_current->_value);
			}

			reference	operator*() {

				return _current->_value;
			}

			bool	operator==( ft::rbt_const_iterator< T > const & rhs ) const {

				return _current == rhs._current;
			}

			bool	operator!=( ft::rbt_const_iterator< T > const & rhs ) const {

				return _current != rhs._current;
			}
	};

	template< typename T, typename U >
	bool	operator==( ft::rbt_const_iterator< T > const & x, ft::rbt_const_iterator< U > const & y ) {

		return x.getCurrent() == y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator!=( ft::rbt_const_iterator< T > const & x, ft::rbt_const_iterator< U > const & y ) {

		return x.getCurrent() != y.getCurrent();
	}

}

#endif

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

			typedef T								value_type;
			typedef Node::difference_type			difference_type;
			typedef T*								pointer;
			typedef T&								reference;
			typedef std::random_access_iterator_tag	iterator_category;

		protected :

			Node	*current;

		public :

			rbt_iterator() : current ( NULL ) {

				return;
			}

			rbt_iterator( Node node ) : current ( node ) {

				return ;
			}

			rbt_iterator( rbt_iterator const & src ) : current ( src.current ) {

				return ;
			}

			~rbt_iterator() {

				return ;
			}

			Node	getCurrent() const {

				return this->current;
			}

			rbt_iterator &	operator=( rbt_iterator const & rhs ) {

				if ( this != &rhs )
					this->current = rhs.current;
				return *this;
			}

			rbt_iterator &	operator++() {

				if ( current->right )
					current = current->right;;
				else if ( current->parent && current == current->parent->left )
					current = current->parent;
				else if ( current->parent )
					current = current->parent->parent;
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

				if ( current->left )
					current = current->left;;
				else if ( current->parent && current == current->parent->right )
					current = current->parent;
				else if ( current->parent )
					current = current->parent->parent;
				else
					current = NULL;
				return *this;
			}

			rbt_iterator	operator--( int ) {

				rbt_iterator	tmp = *this;
				--(*this);
				return tmp;
			}

			friend rbt_iterator operator+( difference_type n, rbt_iterator const & rhs ) {

				rbt_iterator	tmp = rhs;
				return	tmp += n;
			}

			rbt_iterator	operator+( difference_type n ) const {

				rbt_iterator tmp = *this;
				return tmp += n;
			}

//			difference_type	operator-( vector_iterator const & rhs ) {
//
//				return current - rhs.currenti;
//			}
//
			rbt_iterator	operator-( difference_type n ) const {

				rbt_iterator tmp = *this;
				return tmp -= n;
			}

			rbt_iterator &	operator -=( difference_type n ) {

				while ( n != 0 ) {

					if ( n > 0 )
						(*this)--;
					else
						(*this)++;
					n = n - 1 + (2 * ( n < 0 ) );
				}
				return *this;
			}

			rbt_iterator &	operator +=( difference_type n ) {

				while ( n != 0 ) {

					if ( n < 0 )
						(*this)--;
					else
						(*this)++;
					n = n - 1 + (2 * ( n < 0 ) );
				}
				return *this;
			}

			reference	operator[]( int index ) const {

				rbt_iterator	tmp = *this + index;
				
				return *tmp;
			}

			pointer	operator->() {

				return &(current->_value);;
			}

			reference	operator*() {

				return current->_value;;
			}

			bool	operator==( ft::rbt_const_iterator< T > const & rhs ) const {

				return *current == *rhs;
			}

			bool	operator!=( ft::rbt_const_iterator< T > const & rhs ) const {

				return *current != *rhs;
			}

			bool	operator<( ft::rbt_const_iterator< T > const & rhs ) const {

				return *current < *rhs;
			}

			bool	operator>( ft::rbt_const_iterator< T > const & rhs ) const {

				return *current > *rhs;
			}

			bool	operator<=( ft::rbt_const_iterator< T > const & rhs ) const {

				return *current <= *rhs;
			}

			bool	operator>=( ft::rbt_const_iterator< T > const & rhs ) const {

				return *current >= *rhs;
			}
	};

	template< typename T, typename U >
	bool	operator==( rbt_iterator< T > const & x, rbt_iterator< U > const & y ) {

		return *x == *y;
	}

	template< typename T, typename U >
	bool	operator!=( rbt_iterator< T > const & x, rbt_iterator< U > const & y ) {

		return *x != *y;
	}

	template< typename T, typename U >
	bool	operator<( rbt_iterator< T > const & x, rbt_iterator< U > const & y ) {

		return *x < *y;
	}

	template< typename T, typename U >
	bool	operator>( rbt_iterator< T > const & x, rbt_iterator< U > const & y ) {

		return *x > *y;
	}

	template< typename T, typename U >
	bool	operator<=( rbt_iterator< T > const & x, rbt_iterator< U > const & y ) {

		return *x <= *y;
	}

	template< typename T, typename U >
	bool	operator>=( rbt_iterator< T > const & x, rbt_iterator< U > const & y ) {

		return *x >= *y;
	}

}

#endif

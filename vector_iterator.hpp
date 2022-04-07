#ifndef VECTOR_ITERATOR_HPP
# define VECTOR_ITERATOR_HPP

# include <cstddef>
#include <iterator>

namespace ft {

	template< typename T >
	class vector_iterator {

		public :

			typedef T								value_type;
			typedef std::ptrdiff_t						difference_type;
			typedef T*								pointer;
			typedef T&								reference;
			typedef std::random_access_iterator_tag	iterator_category;

		protected :

			pointer	current;

		public :

			vector_iterator() : current ( NULL ) {

				return;
			}

			vector_iterator( pointer ptr ) : current ( ptr ) {

				return ;
			}

			vector_iterator( vector_iterator const & src ) : current ( src.current ) {

				return ;
			}

			~vector_iterator() {

				return ;
			}

			pointer	getCurrent() const {

				return this->current;
			}

			vector_iterator &	operator=( vector_iterator const & rhs ) {

				if ( this != &rhs )
					this->current = rhs.current;
				return *this;
			}

			vector_iterator &	operator++() {

				++current;
				return *this;
			}

			vector_iterator	operator++( int ) {

				vector_iterator	tmp = *this;
				++(*this);
				return tmp;
			}

			vector_iterator &	operator--() {

				--current;
				return *this;
			}

			vector_iterator	operator--( int ) {

				vector_iterator	tmp = *this;
				--(*this);
				return tmp;
			}

			friend vector_iterator operator+( difference_type n, vector_iterator const & rhs ) {

				vector_iterator	tmp = rhs;
				return	tmp += n;
			}

			vector_iterator	operator+( difference_type n ) {

				vector_iterator tmp = *this;
				return tmp +=n;
			}

			difference_type	operator-( vector_iterator const & rhs ) {

				return current - rhs.current;
			}

			vector_iterator	operator-( difference_type n ) {

				vector_iterator tmp = *this;
				return tmp -=n;
			}

			vector_iterator &	operator -=( difference_type n ) {

				return *this += -n;
			}

			vector_iterator &	operator +=( difference_type n ) {

				difference_type m = n;

				if ( m >= 0 ) {

					while ( m--)
						++(*this);
				}
				else {

					while ( m++ )
						--(*this);
				}
				return *this;
			}

			reference	operator[]( int index ) {

				return *(current + index);
			}

			pointer	operator->() {

				return current;
			}

			reference	operator*() {

				return *current;
			}

			bool	operator==( vector_iterator const & rhs ) {

				return current == rhs.current;
			}

			bool	operator!=( vector_iterator const & rhs ) {

				return current != rhs.current;
			}

			bool	operator<( vector_iterator const & rhs ) {

				return current < rhs.current;
			}

			bool	operator>( vector_iterator const & rhs ) {

				return current > rhs.current;
			}

			bool	operator<=( vector_iterator const & rhs ) {

				return current <= rhs.current;
			}

			bool	operator>=( vector_iterator const & rhs ) {

				return current >= rhs.current;
			}
	};

	template< typename T, typename U >
	bool	operator==( vector_iterator< T > const & x, vector_iterator< U > const & y ) {

		return x.getCurrent() == y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator!=( vector_iterator< T > const & x, vector_iterator< U > const & y ) {

		return x.getCurrent() != y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator<( vector_iterator< T > const & x, vector_iterator< U > const & y ) {

		return x.getCurrent() < y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator>( vector_iterator< T > const & x, vector_iterator< U > const & y ) {

		return x.getCurrent() > y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator<=( vector_iterator< T > const & x, vector_iterator< U > const & y ) {

		return x.getCurrent() <= y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator>=( vector_iterator< T > const & x, vector_iterator< U > const & y ) {

		return x.getCurrent() >= y.getCurrent();
	}

	template< typename T >
	class vector_const_iterator {

		public :

			typedef T const							value_type;
			typedef ptrdiff_t						difference_type;
			typedef T const	*					pointer;
			typedef T const	&					reference;
			typedef std::random_access_iterator_tag	iterator_category;

		protected :

			pointer	current;

		public :

			vector_const_iterator() : current ( NULL ) {

				return;
			}

			vector_const_iterator( pointer ptr ) : current ( ptr ) {

				return ;
			}

			vector_const_iterator( vector_const_iterator const & src ) : current ( src.current ) {

				return ;
			}

			vector_const_iterator( ft::vector_iterator< T > const & src ) : current ( src.current ) {

				return ;
			}

			~vector_const_iterator() {

				return ;
			}

			pointer	getCurrent() const {

				return this->current;
			}

			vector_const_iterator &	operator=( vector_const_iterator const & rhs ) {

				if ( this != &rhs )
					this->current = rhs.current;
				return *this;
			}

			vector_const_iterator &	operator++() {

				++current;
				return *this;
			}

			vector_const_iterator	operator++( int ) {

				vector_const_iterator	tmp = *this;
				++(*this);
				return tmp;
			}

			vector_const_iterator &	operator--() {

				--current;
				return *this;
			}

			vector_const_iterator	operator--( int ) {

				vector_const_iterator	tmp = *this;
				--(*this);
				return tmp;
			}

			friend vector_const_iterator operator+( difference_type n, vector_const_iterator const & rhs ) {

				vector_const_iterator	tmp = rhs;
				return	tmp += n;
			}

			vector_const_iterator	operator+( difference_type n ) {

				vector_const_iterator tmp = *this;
				return tmp +=n;
			}

			difference_type	operator-( vector_const_iterator const & rhs ) {

				return current - rhs.current;
			}

			vector_const_iterator	operator-( difference_type n ) {

				vector_const_iterator tmp = *this;
				return tmp -=n;
			}

			vector_const_iterator &	operator -=( difference_type n ) {

				return *this += -n;
			}

			vector_const_iterator &	operator +=( difference_type n ) {

				difference_type m = n;

				if ( m >= 0 ) {

					while ( m--)
						++(*this);
				}
				else {

					while ( m++ )
						--(*this);
				}
				return *this;
			}

			reference	operator[]( int index ) {

				return *(current + index);
			}

			pointer	operator->() {

				return current;
			}

			reference	operator*() {

				return *current;
			}

			bool	operator==( vector_const_iterator const & rhs ) {

				return current == rhs.current;
			}

			bool	operator!=( vector_const_iterator const & rhs ) {

				return current != rhs.current;
			}

			bool	operator<( vector_const_iterator const & rhs ) {

				return current < rhs.current;
			}

			bool	operator>( vector_const_iterator const & rhs ) {

				return current > rhs.current;
			}

			bool	operator<=( vector_const_iterator const & rhs ) {

				return current <= rhs.current;
			}

			bool	operator>=( vector_const_iterator const & rhs ) {

				return current >= rhs.current;
			}
	};

	template< typename T, typename U >
	bool	operator==( vector_const_iterator< T > const & x, vector_const_iterator< U > const & y ) {

		return x.getCurrent() == y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator!=( vector_const_iterator< T > const & x, vector_const_iterator< U > const & y ) {

		return x.getCurrent() != y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator<( vector_const_iterator< T > const & x, vector_const_iterator< U > const & y ) {

		return x.getCurrent() < y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator>( vector_const_iterator< T > const & x, vector_const_iterator< U > const & y ) {

		return x.getCurrent() > y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator<=( vector_const_iterator< T > const & x, vector_const_iterator< U > const & y ) {

		return x.getCurrent() <= y.getCurrent();
	}

	template< typename T, typename U >
	bool	operator>=( vector_const_iterator< T > const & x, vector_const_iterator< U > const & y ) {

		return x.getCurrent() >= y.getCurrent();
	}
}

#endif

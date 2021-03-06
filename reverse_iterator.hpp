#ifndef REVERSE_ITERATOR_HPP
# define REVERSE_ITERATOR_HPP

#include <iterator>
#include "iterator_traits.hpp"

namespace ft {

	template< class Iterator >
	class	reverse_iterator {

		public :

			typedef Iterator							iterator_type;
			typedef ft::iterator_traits< Iterator >		traits;
			typedef typename traits::iterator_category	iterator_category;
			typedef typename traits::value_type			value_type;
			typedef typename traits::difference_type	difference_type;
			typedef typename traits::pointer			pointer;
			typedef typename traits::reference			reference;

		protected :

			Iterator current;

		public :

			reverse_iterator() : current ( NULL ) {

				return ;
			}

			explicit reverse_iterator( Iterator x ) : current ( x ) {

				return ;
			}

			template < class U > reverse_iterator( const reverse_iterator< U > & u ) : current ( u.base() ) {

				return ;
			}

			Iterator	base() const {

				return current;
			}

			reference	operator*() const {

				Iterator	tmp = current;
				return	*--tmp;
			}

			pointer	operator->() const {

				return &( operator*() );
			}

			reverse_iterator &	operator++() {

				--current;
				return *this;
			}

			reverse_iterator 	operator++(int) {

				reverse_iterator	tmp = *this;
				--current;
				return tmp;
			}

			reverse_iterator &	operator--() {

				++current;
				return *this;
			}

			reverse_iterator	operator--(int) {

				reverse_iterator	tmp = *this;
				++current;
				return tmp;
			}

			reverse_iterator	operator+( difference_type n ) {

				return reverse_iterator( current - n );
			}

			reverse_iterator & operator+=( difference_type n ) {

				current -= n;
				return *this;
			}

			reverse_iterator	operator-( difference_type n ) const {

				return reverse_iterator( current + n );
			}

			reverse_iterator & operator-=( difference_type n ) {

				current += n;
				return *this;
			}

			reference	operator[]( difference_type n ) const {

				return current[ -n - 1 ];
			}
	};

	template <class Iterator, class Iterator2>
	bool	operator==( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return x.base() == y.base();
	}

	template <class Iterator, class Iterator2>
	bool	operator<( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return x.base() > y.base();
	}

	template <class Iterator, class Iterator2>
	bool	operator!=( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return x.base() != y.base();
	}

	template <class Iterator, class Iterator2>
	bool	operator>( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return x.base() < y.base();
	}

	template <class Iterator, class Iterator2>
	bool	operator>=( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return x.base() <= y.base();
	}

	template <class Iterator, class Iterator2>
	bool	operator<=( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return x.base() >= y.base();
	}

	template <class Iterator, class Iterator2>
	typename reverse_iterator< Iterator >::difference_type	operator-( const reverse_iterator< Iterator > & x, const reverse_iterator< Iterator2 > & y ) {

		return y.base() - x.base();
	}

	template <class Iterator>
	reverse_iterator< Iterator >	operator+( typename reverse_iterator< Iterator >::difference_type n, const reverse_iterator< Iterator > & x ) {

		return reverse_iterator< Iterator > (x.base() - n);		
	}

}

#endif

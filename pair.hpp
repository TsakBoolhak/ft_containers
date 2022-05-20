#ifndef PAIR_HPP
# define PAIR_HPP

namespace ft {

	template< class T1, class T2 >
	struct pair {

		T1	first;
		T2	second;

		pair() : first ( T1() ), second( T2() ) {

			return ;
		}

		pair( const T1 & x, const T2 & y) : first ( x ), second ( y ) {

			return ;
		}

		template< class U, class V >
		pair( const pair< U, V > &p ) : first ( p.first ), second ( p.second ) {

			return;
		}

		pair &	operator=( const pair & other ) {

			if ( this != &other ) {

				this->first = other.first;
				this->second = other.second;
			}
			return *this;
		}

	};

	template< class T1, class T2 >
	bool	operator==( const pair< T1, T2 > & x, const pair< T1, T2 > & y ) {

		return x.first == y.first && x.second == y.second;
	}

	template< class T1, class T2 >
	bool	operator!=( const pair< T1, T2 > & x, const pair< T1, T2 > & y ) {

		return !(x == y);
	}

	template< class T1, class T2 >
	bool	operator<( const pair< T1, T2 > & x, const pair< T1, T2 > & y ) {

		return x.first < y.first || ( !( y.first < x.first ) && x.second < y.second );
	}

	template< class T1, class T2 >
	bool	operator<=( const pair< T1, T2 > & x, const pair< T1, T2 > & y ) {

		return !(y < x);
	}

	template< class T1, class T2 >
	bool	operator>( const pair< T1, T2 > & x, const pair< T1, T2 > & y ) {

		return y < x;
	}

	template< class T1, class T2 >
	bool	operator>=( const pair< T1, T2 > & x, const pair< T1, T2 > & y ) {

		return !(x < y);
	}

	template< class T1, class T2 >
	pair< T1, T2 >	make_pair( const T1 & x, const T2 & y ) {

		return pair< T1, T2 >( x, y );
	}

}

#endif

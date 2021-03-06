#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "vector_iterator.hpp"
# include "reverse_iterator.hpp"
# include "enable_if.hpp"
# include "is_integral.hpp"
# include "equal.hpp"
# include "lexicographical_compare.hpp"
# include "iterator_traits.hpp"
# include <memory>
# include <iterator>
# include <stdexcept>
# include <string>
# include <sstream>

namespace ft {

	template< class T, class Allocator = std::allocator< T > >
	class vector {

		public :

		/* typedefs */
			typedef typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef ft::vector_iterator< T >				iterator;
			typedef ft::vector_const_iterator< T >			const_iterator;
			typedef typename Allocator::size_type			size_type;
			typedef typename Allocator::difference_type		difference_type;
			typedef T										value_type;
			typedef Allocator								allocator_type;
			typedef typename Allocator::pointer				pointer;
			typedef typename Allocator::const_pointer		const_pointer;
			typedef ft::reverse_iterator< iterator >		reverse_iterator;
			typedef ft::reverse_iterator< const_iterator >	const_reverse_iterator;

		protected :

		/* member variables, protected to be accessible by classes that inherit vector */
			allocator_type	_alloc;
			size_type	_size;
			size_type	_capacity;
			T *			_array;

		public :

		/* construct/copy/destroy */
			explicit vector( Allocator const & alloc = Allocator() ) : _alloc ( alloc ), _size ( 0 ), _capacity ( 0 ), _array ( NULL ) {

				return ;
			}

			explicit vector( size_type n, T const & value = T(), Allocator const & alloc = Allocator() ) : _alloc ( alloc ), _size ( n ), _capacity ( n ), _array ( NULL ) {

				_array = _alloc.allocate( n );
				for ( size_type i = 0 ; i < n ; ++i )
					_alloc.construct( _array + i, value );
				return ;
			}

			template< class InputIterator >
			vector( InputIterator first, InputIterator last, allocator_type const & alloc = allocator_type(), typename ft::enable_if< !ft::is_integral< InputIterator >::value, bool >::type = true ) : _alloc ( alloc ), _size ( 0 ), _capacity ( 0 ), _array ( NULL ) {

				_size = std::distance( first, last );
				_capacity = _size;
				_array = _alloc.allocate(_size);

				for ( size_type i = 0 ; i < _size ; ++i, ++first ) 
					_alloc.construct( _array + i, *first );
				return ;
			}

			vector( const vector< T, Allocator > & x ) : _alloc ( x._alloc ), _size ( x._size ), _capacity ( x._size ), _array ( NULL ) {

				_array = _alloc.allocate( _capacity );
				for ( size_type i = 0 ; i < _size ; ++i )
					_alloc.construct( _array + i, *(x._array + i) );
				return ;
			}

			~vector() {

				this->clear();
				_alloc.deallocate( _array, _capacity );
				return ;
			}

			vector< T, Allocator > &	operator=( const vector< T, Allocator > & x ) {

				if ( this != &x ) {

					this->clear();
					_alloc.deallocate( _array, _capacity );
					_size = x._size;
					if ( _capacity < x._size )
						_capacity = x._size;
					_array = _alloc.allocate(_capacity);
					for ( size_type i = 0 ; i < _size ; ++i )
						_alloc.construct( _array + i, *(x._array + i) );
					
				}
				return *this;
			}

			template< class InputIterator >
			void	assign( InputIterator first, InputIterator last, typename ft::enable_if< !ft::is_integral< InputIterator >::value, bool >::type = true ) {
				
				erase( begin(), end() );
				insert( begin(), first, last ) ;
				return ;
			}

			void	assign( size_type n, const T& t ) {

				erase( begin(), end() );
				insert( begin(), n, t );
				return ;
			}

			allocator_type	get_allocator() const {

				return _alloc;
			}

		/* iterators */
			iterator	begin() {

				return iterator( _array );
			}

			const_iterator	begin() const {

				return const_iterator( _array );
			}

			iterator	end() {

				return iterator( _array + _size );
			}

			const_iterator	end() const {

				return const_iterator( _array + _size );
			}

			reverse_iterator	rbegin() {

				return reverse_iterator( _array + _size );
			}

			const_reverse_iterator	rbegin() const {

				return const_reverse_iterator( _array + _size );
			}

			reverse_iterator	rend() {

				return reverse_iterator( _array );
			}

			const_reverse_iterator	rend() const {

				return	const_reverse_iterator( _array );
			}

		/* capacity */
			size_type	size() const {

				return _size;
			}

			size_type	max_size() const {

				return _alloc.max_size();
			}

			void	resize( size_type sz, T c = T() ) {

				if ( sz > size() )
					insert( end(), sz - size(), c);
				else if (sz < size() )
					erase( begin() + sz, end() );
				return ;
			}

			size_type	capacity() const {

				return _capacity;
			}

			bool	empty() const {

				return _size == 0;
			}

			void	reserve( size_type n ) {

				if ( n > max_size() )
					throw std::length_error("vector::reserve");
				if ( n >_capacity ) {

					pointer	newArray = _alloc.allocate( n );
					for ( size_type i = 0 ; i < _size ; ++i ) {

						_alloc.construct( newArray + i, *(_array + i) );
						_alloc.destroy( _array + i );
					}
					_alloc.deallocate( _array, _capacity );
					_capacity = n;
					_array = newArray;
				}
				return ;
			}

		/* element access */
			reference	operator[]( size_type n ) {

				return	_array[n];
			}

			const_reference	operator[]( size_type n ) const {

				return _array[n];
			}

			reference	at( size_type n ) {

				if (n < 0 || _size <= n ) {

					std::stringstream strStream;
					strStream << "vector::_M_range_check: __n (which is " << n << ") ";
					if ( n < 0 )
						strStream << "< 0";
					else
						strStream << ">= this->size() (which is " << this->size() << ")";
					throw std::out_of_range( strStream.str() );
				}
				return _array[n];
			}

			const_reference	at( size_type n ) const {

				if (n < 0 || _size <= n ) {

					std::stringstream strStream;
					strStream << "vector::_M_range_check: __n (which is " << n << ") ";
					if ( n < 0 )
						strStream << "< 0";
					else
						strStream << ">= this->size() (which is " << this->size() << ")";
					throw std::out_of_range( strStream.str() );
				}
				return _array[n];
			}

			reference	front() {

				return *(begin());
			}

			const_reference	front() const {

				return *(begin());
			}

			reference	back() {

				return *(rbegin());
			}

			const_reference	back() const {

				return *(rbegin());
			}

		/* modifiers */
			void	push_back( const T& x ) {

				if ( _capacity == 0 )
					reserve( 1 );
				else if ( _size == _capacity ) {

					reserve( _capacity * 2 );
				}
				_alloc.construct( _array + _size, x );
				_size++;
				return ;
			}

			void	pop_back() {

				_size--;
				_alloc.destroy( _array + _size );
				return ;
			}

			iterator	insert( iterator position, const T& x ) {

				difference_type i = std::distance( begin(), position );
				insert( position, 1, x );
				return	iterator( begin() + i );
			}

			void	insert( iterator position, size_type n, const T& x ) {

				size_type	dist = std::distance( begin(), position );
				if ( n <= 0 )
					return ;
				else if ( n > _capacity - _size ) {

					if ( max_size() - _size >= _size && n <= _size )
						reserve( _size * 2 );
					else
						reserve( _size + n );
					position = begin() + dist;
				}
				pointer	arrEnd = _array + _size + n - 1;
				pointer arrStart = _array + dist + n - 1;
				while ( arrEnd != arrStart ) {
					_alloc.construct( arrEnd, *( arrEnd - n) );
					_alloc.destroy( arrEnd - n );
					arrEnd--;
				}
				_size += n;
				for ( size_type i = 0 ; i < n ; ++i )
					_alloc.construct( _array + dist + i, x );
				return ;
			}

			template< class InputIterator >
			void	insert( iterator position, InputIterator first, InputIterator last, typename ft::enable_if< !ft::is_integral< InputIterator >::value, bool >::type = true ) {

				size_type	dist = std::distance( begin(), position );
				size_type	n = std::distance( first, last );

				if ( n <= 0 )
					return ;
				else if ( n > _capacity - _size ) {

					if ( max_size() - _size >= _capacity && n <= _size )
						reserve( _size * 2 );
					else
						reserve( _size + n );
					position = begin() + dist;
				}
				for ( size_type i = 0 ; i < n ; ++i, ++first )
					insert(begin() + dist + i, *(first));
				return ;
			}

			iterator	erase( iterator position ) {

				if ( position == end() || empty() )
					return end();
				for ( iterator it = position ; it != end() ; ++it ) {
					_alloc.destroy( &(*it) );
					if (it !=  end() - 1)
						_alloc.construct( &(*it), *(it + 1) );
				}
				_size--;
				return position;
			}

			iterator	erase( iterator first, iterator last ) {

				iterator ret = first;
				size_type	distFromBegin = std::distance( begin(), first );
				size_type	toMove = std::distance( last, end() );;
				size_type	dist = std::distance( first, last );
				if ( dist == 0 )
					return ret;
				for ( ; first != last ; ++first )
					_alloc.destroy( &(*first) );
				for ( size_type i = 0 ; i != toMove ; ++i ) {
					_alloc.construct( _array + distFromBegin + i, *(_array + distFromBegin + dist + i) );
					_alloc.destroy( _array + distFromBegin + dist + i );
				}
				_size -= dist;
				return ret;
			}

			void	swap( vector< T, Allocator > &rhs ) {

				allocator_type	tmpAlloc = rhs._alloc;
				size_type	tmpCapacity = rhs._capacity;
				size_type	tmpSize = rhs._size;
				pointer	tmpArray = rhs._array;

				rhs._alloc = _alloc;
				rhs._capacity = _capacity;
				rhs._size = _size;
				rhs._array = _array;

				_alloc = tmpAlloc;
				_capacity = tmpCapacity;
				_size = tmpSize;
				_array = tmpArray;

				return ;
			}

			void	clear() {

				for ( size_type i = 0 ; i < _size ; ++i )
					_alloc.destroy( _array + i );
				_size = 0;
				return ;
			}
		
	};

/* non-member comparators */
	template< class T, class Allocator >
	bool	operator==( vector< T, Allocator >const & x, vector< T, Allocator > const & y ) {

		if ( x.size() != y.size() )
			return false;
		return ft::equal( x.begin(), x.end(), y.begin() );
	}

	template< class T, class Allocator >
	bool	operator<( vector< T, Allocator >const & x, vector< T, Allocator > const & y ) {

		return	ft::lexicographical_compare( x.begin(), x.end(), y.begin(), y.end() );
	}

	template< class T, class Allocator >
	bool	operator!=( vector< T, Allocator >const & x, vector< T, Allocator > const & y ) {

		return !(x == y);
	}

	template< class T, class Allocator >
	bool	operator>=( vector< T, Allocator >const & x, vector< T, Allocator > const & y ) {

		return !(x < y);
	}

	template< class T, class Allocator >
	bool	operator>( vector< T, Allocator >const & x, vector< T, Allocator > const & y ) {

		return y < x;
	}

	template< class T, class Allocator >
	bool	operator<=( vector< T, Allocator >const & x, vector< T, Allocator > const & y ) {

		return !(x > y);
	}
}

/* specialized algorithms */
namespace std {

	template< class T, class Allocator >
	void	swap( ft::vector< T, Allocator>& x, ft::vector< T, Allocator >& y ) {

		x.swap( y );
		return ;
	}
}

#endif

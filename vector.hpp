#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "vector_iterator.hpp"
# include "reverse_iterator.hpp"
# include "enable_if.hpp"
# include "is_integral.hpp"
# include <memory>
# include <iterator>
# include <stdexcept>

namespace ft {

	template< class T, class Allocator = std::allocator< T > >
	class vector {

		public :

		/* typedefs */
			typedef typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef ft::vector_iterator< T >				iterator;
			typedef ft::vector_const_iterator< T >			const_iterator;
			typedef Allocator::size_type					size_type;
			typedef Allocator::difference_type				difference_type
			typedef typename T								value_type;
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
			vector( ft::enable_if< !ft::is_integral< InputIterator >::value, InputIterator > first, InputIterator last, Allocator const & alloc = Allocator() ) : _alloc ( alloc ), _size ( 0 ), _capacity ( 0 ), _array ( NULL ) {

				_size = std::distance( first, last );
				_capacity = _size;
				_array = alloc.allocate( _size );
				for ( T * tmp = _array ; first != last ; ++first, ++tmp ) 
					_alloc.construct( tmp, *first );
				return ;
			}

			vector( const vector< T, Allocator > & x ) : _alloc ( x._alloc ), _size ( x._size ), _capacity ( x._capacity ), _array ( NULL ) {

				_array = _alloc.allocate( _capacity );
				for ( size_type i = 0 ; i < _size ; ++i )
					_alloc.construct( _array + i, *(x._array + i) );
				return ;
			}

			~vector() {

				for (size_type i = 0 ; i < _size ; ++i )
					_alloc.destroy( _array + i );
				_alloc.deallocate( _array, _capacity );
				return ;
			}

			vector< T, Allocator > &	operator=( const vector< T, Allocator > & x ) {

				if ( this != &x ) {

					if ( _size < x._size ) {

						reserve( x._size );
						resize( x._size );
					}
					else {

						for (size_type i = 0 ; i < _size ; ++i )
							_alloc.destroy( _array + i );
					}
					_size = x._size;
					for ( size_type i = 0 ; i < _size ; ++i )
						_alloc.construct( _array + i, *(x._array + i) );
					
				}
				return *this;
			}

			template< class InputIterator >
			void	assign( typename ft::enableif< !ft::is_integral< InputIterator>::value, InputIterator >::type first, InputIterator last ) {
				
				erase( begin(), end() );
				insert( begin(), first, last ) ;
				return ;
			}

			void	assign( size_type n, const T& u ) {

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
					throw std::length_error("_M_default_append");
				if ( n >_capacity ) {

					pointer	newArray = _alloc.allocate( n );
					for ( size_type i = 0 ; i < _size ; ++i ) {

						_alloc.construct( newArray + i, *(_array + i) );
						_alloc.destroy( _array + i );
					}
					_alloc.deallocate( _array, _capacity );
					_capacity = n;
					_array = newArray
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

				if (n < 0 || _size < n ) {

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

				if (n < 0 || _size < n ) {

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

					if ( max_size() - _capacity >= _capacity )
						reserve( _capacity * 2 );
					else
						reserve( _capacity + 1 );
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

				insert( position, 1, val );
				return	iterator( begin() + ( position.get_ptr(), _array ) );
			}

			void	insert( iterator position, size_type n, const T& x ) {

				size_type	dist = std::distance( begin(), position );
				if ( n <= 0 )
					return ;
				else if ( n > _capacity - _size ) {

					if ( max_size() - _capacity >= _capacity && n <= ( _capacity * 2 ) - _size )
						reserve( _capacity * 2 );
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
				_size += count;
				for ( size_type i = 0 ; i < n ; ++i )
					_alloc.construct( _array + dist + i, val );
				return ;
			}

			template< class InputIterator >
			void	insert( iterator position, InputIterator first, InputIterator last ) {

			}

			iterator	erase( iterator position );
			iterator	erase( iterator first, iterator last );
			void	swap( vector< T, Allocator > & );
			void	clear();
		
	};

/* non-member comparators */
	template< class T, class Allocator >
	bool	operator==( const vector< const vector< T, Allocator >& x, const vector< const vector< T, Allocator >& y );
	template< class T, class Allocator >
	bool	operator<( const vector< const vector< T, Allocator >& x, const vector< const vector< T, Allocator >& y );
	template< class T, class Allocator >
	bool	operator!=( const vector< const vector< T, Allocator >& x, const vector< const vector< T, Allocator >& y );
	template< class T, class Allocator >
	bool	operator>( const vector< const vector< T, Allocator >& x, const vector< const vector< T, Allocator >& y );
	template< class T, class Allocator >
	bool	operator>=( const vector< const vector< T, Allocator >& x, const vector< const vector< T, Allocator >& y );
	template< class T, class Allocator >
	bool	operator<=( const vector< const vector< T, Allocator >& x, const vector< const vector< T, Allocator >& y );

/* specialized algorithms */
	template< class T, class Allocator >
	void	swap( vector< T, Allocator>& x, vector< T, Allocator >& y );

}

#endif

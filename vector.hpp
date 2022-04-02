#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "vector_iterator.hpp"
# include "reverse_iterator.hpp"
# include "enable_if.hpp"
# include "is_integral.hpp"
# include <memory>
# include <iterator>

namespace ft {

	template< class T, class Allocator = std::allocator< T > >
	class vector {

		public :

		/* typedefs */
			typedef typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef ft::vector_iterator< T >				iterator;
			typedef ft::vector_iterator< T const>			const_iterator;
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
			iterator	begin();
			const_iterator	begin() const;
			iterator	end();
			const_iterator	end() const;
			reverse_iterator	rbegin();
			const_reverse_iterator	rbegin() const;
			reverse_iterator	rend();
			const_reverse_iterator	rend() const;

		/* capacity */
			size_type	size() const;
			size_type	max_size() const;
			void	resize( size_type sz, T c = T() );
			size_type	capacity() const;
			bool	empty() const;
			void	reserve( size_type n );

		/* element access */
			reference	operator[]( size_type n );
			const_reference	operator[]( size_type n ) const;
			const_reference	at( size_type n ) const;
			reference	at( size_type n );
			reference	front();
			const_reference	front() const;
			reference	back();
			const_reference	back() const;

		/* modifiers */
			void	push_back( const T& x );
			void	pop_back();
			iterator	insert( iterator position, const T& x );
			void	insert( iterator position, size_type n, const T& x );

			template< class InputIterator >
			void	insert( iterator position, InputIterator first, InputIterator last );

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

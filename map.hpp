#ifndef MAP_HPP
# define MAP_HPP

# include <functional>
# include <memory>
# include <stdexcept>
# include "pair.hpp"
# include "RBTree.hpp"
# include "map_iterator.hpp"
# include "map_const_iterator.hpp"
# include "reverse_iterator.hpp"
# include "enable_if.hpp"
# include "is_integral.hpp"

namespace ft {

	template< class Key, class T, class Compare = std::less< Key >, class Allocator = std::allocator< ft::pair< const Key, T> > >

	class map {

		public :

			typedef Key										key_type;
			typedef T										mapped_type;
			typedef ft::pair< const Key, T >				value_type;
			typedef Compare									key_compare;
			typedef Allocator								allocator_type;
			typedef typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef	ft::map_iterator						iterator;
			typedef ft::map_const_iterator					const_iterator;
			typedef typename Allocator::size_type			size_type;
			typedef typename Allocator::difference_type		difference_type;
			typedef typename Allocator::pointer				pointer;
			typedef typename Allocator::const_pointer		const_pointer;
			typedef ft::reverse_iterator< iterator >		reverse_iterator;
			typedef ft::reverse_iterator< const_iterator >	const_reverse_iterator;

			class	value_compare : public std::binary_function< value_type, value_type, bool > {

				friend class map;

				protected :

					Compare	comp;
					value_compare( Compare c  ) : comp ( c ) {

						return ;
					}

				public :

					bool	operator()( value_type const & x, value_type const  & y ) const {

						return comp( x.first, y.first );
					}
			};

		protected :

			key_compare	_keyComp;
			value_compare	_valueComp;
			allocator_type	_allocator;
			RBTree	tree;

		public :

//	construct/copy/destroy
			explicit	map( Compare const & comp = Compare(), Allocator const & alloc = Allocator() ) {

				return ;
			}

			template < class InputIterator >
			map( typename ft::enable_if< !ft::is_integral< InputIterator >::value, InputIterator >::type first, InputIterator last, Compare const & comp = Compare(), Allocator const & alloc = Allocator() ) {

				return ;
			}

			map( map< Key, T, Compare, Allocator> const & x ) {

				return ;
			}

			~map() {

				return ;
			}

			map< Key, T, Compare, Allocator > & operator=( map< Key, T, Compare, Allocator > const & x ) {

				return ;
			}

//	iterators
			iterator	begin() {

				return ;
			}

			const_iterator	begin() const {

				return ;
			}

			iterator	end() {

				return ;
			}

			const_iterator	end() const {

				return ;
			}

			reverse_iterator	rbegin() {

				return ;
			}

			const_reverse_iterator	rbegin() const {

				return ;
			}

			reverse_iterator	rend() {

				return ;
			}

			const_reverse_iterator	rend() const {

				return ;
			}

//	capacity
			bool	empty() const {

				return ;
			}

			size_type	size() const {

				return ;
			}

			size_type	max_size() const {

				return ;
			}

//	elements access
			T&	operator[]( key_type const & x ) {

				return ;
			}

//	modifiers
			ft::pair< iterator, bool >	insert( value_type const & x ) {

				return ;
			}

			iterator	insert( iterator position, value_type const & x ) {

				return ;
			}

			template< class InputIterator >
			void	insert( typename ft::enable_if< !ft::is_integral< InputIterator >::value, InputIterator >::type first, InputIterator last ) {

				return ;
			}

			void	erase( iterator position ) {

				return ;
			}

			size_type	erase( key_type const & x ) {

				return ;
			}

			void	erase( iterator first, iterator last ) {

				return ;
			}

			void	swap( map< Key, T, Compare, Allocator > & rhs ) {

				return ;
			}

			void	clear() {

				return ;
			}

//	observers
			key_compare	key_comp() const {

				return ;
			}

			value_compare	value_cop() const {

				return ;
			}

//	map operations
			iterator	find( key_type const & x ) {

				return ;
			}

			const_iterator	find( key_type const & x ) const {

				return ;
			}

			size_type	count( key_type const & x ) const {

				return ;
			}

			iterator	lower_bound( key_type const & x ) {

				return ;
			}

			const_iterator	lower_bound( key_type const & x ) const {

				return ;
			}

			iterator	upper_bound( key_type const & x ) {

				return ;
			}

			const_iterator	upper_bound( key_type const & x ) const {

				return ;
			}

			ft::pair< iterator, iterator >	equal_range( key_type const & x ) {

				return ;
			}

			ft::pair< const_iterator, const_iterator >	equal_range( key_type const & x ) const {

				return ;
			}
	};

	template< class Key, class T, class Compare, class Allocator >
	bool	operator==( map< Key, T, Compare, Allocator > const & x, map< Key, T, Compare, Allocator> const & y ) {

		return ;
	}

	template< class Key, class T, class Compare, class Allocator >
	bool	operator<( map< Key, T, Compare, Allocator > const & x, map< Key, T, Compare, Allocator> const & y ) {

		return ;
	}

	template< class Key, class T, class Compare, class Allocator >
	bool	operator!=( map< Key, T, Compare, Allocator > const & x, map< Key, T, Compare, Allocator> const & y ) {

		return ;
	}

	template< class Key, class T, class Compare, class Allocator >
	bool	operator>( map< Key, T, Compare, Allocator > const & x, map< Key, T, Compare, Allocator> const & y ) {

		return ;
	}

	template< class Key, class T, class Compare, class Allocator >
	bool	operator>=( map< Key, T, Compare, Allocator > const & x, map< Key, T, Compare, Allocator> const & y ) {

		return ;
	}

	template< class Key, class T, class Compare, class Allocator >
	bool	operator<=( map< Key, T, Compare, Allocator > const & x, map< Key, T, Compare, Allocator> const & y ) {

		return ;
	}

// specialized algorithms
	template< class Key, class T, class Compare, class Allocator >
	void	swap( map< Key, T, Compare, Allocator > & x, map< Key, T, Compare, Allocator > & y ) {

		return ;
	}

}

#endif

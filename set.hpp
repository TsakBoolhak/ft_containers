#ifndef SET_HPP
# define SET_HPP

# include <functional>
# include <memory>
# include <stdexcept>
# include "pair.hpp"
# include "RBTree.hpp"
# include "rbt_iterator.hpp"
# include "rbt_const_iterator.hpp"
# include "reverse_iterator.hpp"
# include "equal.hpp"
# include "lexicographical_compare.hpp"
# include "iterator_traits.hpp"

namespace ft {

	template< class Key, class Compare = std::less< Key >, class Allocator = std::allocator< Key > >

	class set {

		public :

			typedef Key										key_type;
			typedef Key										value_type;
			typedef Compare									key_compare;
			typedef Compare									value_compare;
			typedef Allocator								allocator_type;
			typedef typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef typename Allocator::size_type			size_type;
			typedef typename Allocator::difference_type		difference_type;
			typedef typename Allocator::pointer				pointer;
			typedef typename Allocator::const_pointer		const_pointer;

			typedef ft::Node<value_type>								Node;
			typedef ft::RBTree< value_type, value_compare, Allocator>	RBTree;
			typedef	typename RBTree::const_iterator							iterator;
			typedef typename RBTree::const_iterator						const_iterator;
			typedef ft::reverse_iterator< iterator >					reverse_iterator;
			typedef ft::reverse_iterator< const_iterator >				const_reverse_iterator;

		protected :

			allocator_type	_alloc;
			key_compare		_keyComp;
			RBTree			_tree;

			bool	isEqual( Key const & x, Key const & y ) const {

				return _keyComp( x, y ) == _keyComp( y, x );
			}

		public :

//	construct/copy/destroy
			explicit	set( Compare const & comp = Compare(), Allocator const & alloc = Allocator() ) : _alloc ( alloc ), _keyComp ( comp ), _tree ( RBTree (comp) ) {

				return ;
			}

			template < class InputIterator >
			set( InputIterator first, InputIterator last, Compare const & comp = Compare(), Allocator const & alloc = Allocator() ) : _alloc ( alloc ), _keyComp ( comp ), _tree ( RBTree (comp) ) {

				insert( first, last );
				return ;
			}

			set( set< Key, Compare, Allocator> const & x ) : _alloc ( x._alloc ), _keyComp ( x._keyComp ), _tree ( RBTree (x._keyComp) ) {

				insert( x.begin(), x.end() );
				return ;
			}

			~set() {

				return ;
			}

			set< Key, Compare, Allocator > & operator=( set< Key, Compare, Allocator > const & x ) {

				if ( this != &x ) {

					this->_tree = x._tree;
				}
				return *this;
			}

//	iterators
			iterator	begin() {

				return  _tree.begin();
			}

			const_iterator	begin() const {

				return  _tree.begin();
			}

			iterator	end() {

				return _tree.end();
			}

			const_iterator	end() const {

				return _tree.end();
			}

			reverse_iterator	rbegin() {

				return _tree.rbegin();
			}

			const_reverse_iterator	rbegin() const {

				return _tree.rbegin();
			}

			reverse_iterator	rend() {

				return _tree.rend();
			}

			const_reverse_iterator	rend() const {

				return _tree.rend();
			}

//	capacity
			bool	empty() const {

				return _tree.size() == 0 ;
			}

			size_type	size() const {

				return _tree.size();
			}

			size_type	max_size() const {

				return std::allocator<Node> ().max_size();
			}

//	modifiers
			ft::pair< iterator, bool >	insert( value_type const & x ) {

				return _tree.insert( x );
			}

			iterator	insert( iterator position, value_type const & x ) {

				return _tree.insert( position, x );
			}

			template< class InputIterator >
			void	insert( InputIterator first, InputIterator last ) {

				return _tree.insert( first, last );
			}

			void	erase( iterator position ) {

				erase( *position );
				return;
			}

			size_type	erase( key_type const & x ) {

				iterator it = find( x );
				if ( it == end() )
					return 0;
				else
					return _tree.erase( it.getCurrent() );
			}

			void	erase( iterator first, iterator last ) {

				for ( ; first != last ; ) {

					iterator tmp = first;
					first++;
					erase( tmp );
				}
				return ;
			}

			void	swap( set< Key, Compare, Allocator > & rhs ) {

				if ( this != &rhs ) {
					Node *		rootTmp = _tree.getRoot();
					size_type	sizeTmp = _tree.size();

					_tree.setRoot( rhs._tree.getRoot() );
					_tree.setSize( rhs._tree.size());

					rhs._tree.setRoot( rootTmp );
					rhs._tree.setSize( sizeTmp );
				}
				return ;
			}

			void	clear() {

				_tree.clear();
				return ;
			}

//	observers
			key_compare	key_comp() const {

				return _keyComp;
			}

			value_compare	value_comp() const {

				return _keyComp;
			}

			allocator_type	get_allocator() const {

				return _alloc;
			}

//	set operations

			iterator	find( key_type const & x ) const {

				Node * tmp = _tree.getRoot();

				while ( tmp && !isEqual( tmp->_value, x ) ) {

					if ( _keyComp( x, tmp->_value ) )
						tmp = tmp->_left;
					else
						tmp = tmp->_right;
				}
				return const_iterator ( tmp );
			}

			size_type	count( key_type const & x ) const {

				if ( find( x ) == this->end() )
					return 0;
				return 1;
			}

			iterator	lower_bound( key_type const & x ) const {

				if ( _tree.getRoot() == NULL )
					return _tree.end();
				else if ( isEqual(_tree.getRoot()->_value, x) )
					return const_iterator( _tree.getRoot() );
				else if ( _keyComp(_tree.getRoot()->_value, x) ) {

					reverse_iterator it = _tree.rbegin();
					for ( reverse_iterator ite = _tree.rend() ; it != ite ; it++ ) {

						if ( isEqual( *it, x ) ) {

							it++;
							return iterator( it.base() );
						}
						else if ( _keyComp( *it, x ) )
							return iterator(it.base());
					}
				}
				else {

					iterator it = _tree.begin();
					for ( iterator ite = _tree.end() ; it != ite ; ++it ) {

						if ( isEqual( *it, x ) || _keyComp( x, *it ) )
							return it;
					}
				}
				return _tree.end();
			}

			iterator	upper_bound( key_type const & x ) const {

				iterator it = lower_bound( x );
				if ( it != end() && isEqual( *it, x ) )
					it++;
				return it;
			}

			ft::pair< iterator, iterator >	equal_range( key_type const & x ) const {

				iterator low = lower_bound( x );
				iterator up = low;
				if ( up != end() && isEqual( *up, x ) )
					up++;
				return ft::make_pair( low, up );
			}
	};

	template< class Key, class Compare, class Allocator >
	bool	operator==( set< Key, Compare, Allocator > const & x, set< Key, Compare, Allocator> const & y ) {

		if ( x.size() != y.size() )
			return false;

		return ft::equal( x.begin(), x.end(), y.begin() );
	}

	template< class Key, class Compare, class Allocator >
	bool	operator<( set< Key, Compare, Allocator > const & x, set< Key, Compare, Allocator> const & y ) {

		return ft::lexicographical_compare( x.begin(), x.end(), y.begin(), y.end() );
	}

	template< class Key, class Compare, class Allocator >
	bool	operator!=( set< Key, Compare, Allocator > const & x, set< Key, Compare, Allocator> const & y ) {

		return !( x == y );
	}

	template< class Key, class Compare, class Allocator >
	bool	operator>( set< Key, Compare, Allocator > const & x, set< Key, Compare, Allocator> const & y ) {

		return !( x <= y );
	}

	template< class Key, class Compare, class Allocator >
	bool	operator>=( set< Key, Compare, Allocator > const & x, set< Key, Compare, Allocator> const & y ) {

		return !( x < y );
	}

	template< class Key, class Compare, class Allocator >
	bool	operator<=( set< Key, Compare, Allocator > const & x, set< Key, Compare, Allocator> const & y ) {

		return !( y < x );
	}

}

// specialized algorithms
namespace std {
	template< class Key, class Compare, class Allocator >
	void	swap( ft::set< Key, Compare, Allocator > & x, ft::set< Key, Compare, Allocator > & y ) {

		x.swap( y );
		return ;
	}
}

#endif

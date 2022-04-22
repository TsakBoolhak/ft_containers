#ifndef RBTree_HPP
# define RBTree_HPP

# include "rbt_iterator.hpp"
# include "rbt_const_iterator.hpp"
# include "rbt_node.hpp"

namespace ft {

	template < class T, class Value_Compare, class Allocator = std::allocator< T > >
	class RBTree {

		public :

			typedef T										value_type;
			typedef Value_Compare							value_compare;
			typedef Allocator								allocator_type;
			typedef typename Allocator::reference			reference;
			typedef typename Allocator:const_reference		const_reference;
			typedef ft::rbt_iterator						iterator;
			typedef ft::rbt_const_iterator					const_iterator;
			typedef typename Allocator::size_type			size_type;
			typedef typename Allocator::difference_type		difference_type;
			typedef typename Allocator::pointer				pointer;
			typedef typename Allocator::const_pointer		const_pointer;
			typedef ft::reverse_iterator< iterator >		reverse_iterator;
			typedef ft::reverse_iterator< const_iterator >	const_reverse_iterator;

		protected :
		
			ft::Node	_root;

		public :

			RBTree( Node root = Node () ) : _root ( root ) {

				return ;
			}
	};
}

#endif

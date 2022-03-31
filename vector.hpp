#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "vector_iterator.hpp"
# include "reverse_iterator.hpp"

namespace ft {

	template< class T, class Allocator = std::allocator< T > >
	class vector {

		public :

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
		
	};

}

#endif

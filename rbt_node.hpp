#ifndef RBT_NODE_HPP
# define RBT_NODE_HPP

# include <memory>
# include <cstddef>

namespace ft {

	template < class T >
	class Node {

		public :

			typedef T						value_type;
			typedef std::ptrdiff_t			difference_type;
			typedef T*						pointer;
			typedef T&						reference;


			Node *	_right;
			Node *	_left;
			Node *	_parent;
			T		_value;


			Node( T value = T (), Node * parent = NULL ) : _right ( NULL ), _left ( NULL ), _parent ( parent ), _value ( value ) {

					return ;
				}
		};
}

#endif

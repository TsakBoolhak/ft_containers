# include "rbt_node.hpp"
# include <iostream>

int	main() {

	ft::Node< int > root ( 42 );
	ft::Node< int > tmp;
	tmp = ft::Node< int > ( 3, &root );
	root._left = &tmp;
	std::cout << "root" << root._value << std::endl;
//	std::cout << "left" << root.left->_value << std::endl;

}
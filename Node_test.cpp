# include "rbt_node.hpp"
#include "RBTree.hpp"
# include <iostream>

int	main() {

/*	ft::Node< int > root ( 42 );
	ft::Node< int > *tmp = new ft::Node< int > ( 3, &root );
	tmp->_parent = &root;
	root._left = tmp;
	std::cout << "root " << root._value << std::endl;
	std::cout << "left " << root._left->_value << std::endl;
	tmp = new ft::Node<int> (-4, &root );
	tmp->_parent = root._left;
	root._left->_left = tmp;
	tmp = new ft::Node<int> (15, &root );
	tmp->_parent = root._left;
	root._left->_right = tmp;
	tmp = new ft::Node<int> ( 101010, &root );
	tmp->_parent = &root;
	root._right = tmp;
	ft::RBTree<int>	tree ( &root );
	*/
/*	ft::RBTree<int>::iterator it = tree.begin();
	
	std::cout << "*begin() : " << *it << std::endl;
	++it;
	std::cout << "++ : " << *it << std::endl;
	it++;
	std::cout << "++ : " << *it << std::endl;
*//*
	std::cout << "A" << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	std::cout << "B" << std::endl;
	ft::RBTree<int>::iterator it = tree.end();
	++it;
	std::cout << std::endl;
	std::cout << "C" << std::endl;
	for ( ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "D" << std::endl;

	std::cout << *tree.rbegin() << std::endl;*/

	ft::RBTree<int>	tree;
	std::cout << "A" << std::endl;
	tree.insertNode(1);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	std::cout << "B" << std::endl;
	tree.insertNode(42);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	std::cout << "C" << std::endl;
	tree.insertNode(-3);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	std::cout << "D" << std::endl;
	tree.insertNode(10);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(11);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(12);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(13);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(14);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(100);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(101);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(102);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(103);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(104);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(105);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(106);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(107);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(108);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	tree.insertNode(109);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::iterator it = tree.begin() ; it != tree.end() ; it++ )
		std::cout << *it << std::endl;
	std::cout << "E" << std::endl;
//	std::cout << std::endl;
//	for ( ft::RBTree<int>::reverse_iterator it = tree.rbegin() ; it != tree.rend() ; it++ )
//		std::cout << *it << std::endl;
	return 0;
}

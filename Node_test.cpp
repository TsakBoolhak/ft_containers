# include "rbt_node.hpp"
#include "RBTree.hpp"
#include "rbt_node.hpp"
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
	tree.insert(1);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(1);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	std::cout << "B" << std::endl;
	tree.insert(42);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	std::cout << "C" << std::endl;
	tree.insert(-3);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	std::cout << "D" << std::endl;
	tree.insert(10);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(11);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(12);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(13);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(14);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(100);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(101);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(102);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(103);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(104);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(105);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(106);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(107);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(108);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.insert(109);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	std::cout << "E" << std::endl;
	tree.erase(109);
	std::cout << "F" << std::endl;
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(1011);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(108);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(107);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(106);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(105);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(104);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(103);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.erase(42);
	std::cout << "root = " << tree.getRoot()->_value << std::endl;
	tree.begin().getCurrent()->_color = ft::Node<int>::BLACK;
	for ( ft::RBTree<int>::const_iterator it = tree.begin() ; it != tree.end() ; it++ ) {
		std::cout << *it << " color: ";
		if (it.getCurrent()->_color == ft::Node<int>::RED)
			std::cout << "RED";
		else
			std::cout << "BLACK";
		std::cout << std::endl;
	}
	tree.clear();
//	std::cout << std::endl;
//	for ( ft::RBTree<int>::reverse_iterator it = tree.rbegin() ; it != tree.rend() ; it++ )
//		std::cout << *it << std::endl;
	return 0;
}

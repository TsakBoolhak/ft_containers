#include "setTests.hpp"
#include <iostream>

int	clear_basic() {

	NAMESPACE::set<int> mySet;

	mySet.insert(100);
	mySet.insert(200);
	mySet.insert(300);

	std::cout << "mySet contains:";
	for ( NAMESPACE::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	mySet.clear();
	mySet.insert(1101);
	mySet.insert(2202);

	std::cout << "mySet contains:";
	for ( NAMESPACE::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}

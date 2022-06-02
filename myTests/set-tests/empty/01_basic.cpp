#include "setTests.hpp"
#include <iostream>

int	empty_basic() {

	NAMESPACE::set<int> mySet;

	mySet.insert(20);
	mySet.insert(30);
	mySet.insert(10);

	std::cout << "mySet contains:";
	while ( !mySet.empty() ) {

		std::cout << ' ' << *mySet.begin();
		mySet.erase( mySet.begin() );
	}
	std::cout << std::endl;

	return 0;
}

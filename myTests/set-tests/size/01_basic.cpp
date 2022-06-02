#include "setTests.hpp"
#include <iostream>

int	size_basic() {

	NAMESPACE::set< int > mySet;
	std::cout << "0. size: " << mySet.size() << std::endl;

	for ( int i = 0; i < 10; ++i ) { mySet.insert(i); }
	std::cout << "1. size: " << mySet.size() << std::endl;

	mySet.insert( 100 );
	std::cout << "2. size: " << mySet.size() << std::endl;

	mySet.erase( 5 );
	std::cout << "3. size: " << mySet.size() << std::endl;

	return 0;
}

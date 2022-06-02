#include "setTests.hpp"
#include <iostream>

int	count_basic() {

	NAMESPACE::set<int> mySet;

	for ( int i = 0; i < 5; i++) { mySet.insert(i*3); }

	for ( int i = 0; i < 10; i++) {

		std::cout << i << " is ";
		if ( mySet.count(i) == 0 ) { std::cout << "not "; }
		std::cout << "an element of mySet" << std::endl;
	}

	return 0;
}

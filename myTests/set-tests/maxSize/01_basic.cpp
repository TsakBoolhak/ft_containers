#include "setTests.hpp"
#include <iostream>

int	maxSize_basic() {

	int	i;
	NAMESPACE::set<int> mySet;

	if ( mySet.max_size() > 1000 ) {

		for ( i = 0; i < 1000 ; ++i ) { mySet.insert( i ); }
		std::cout << "The set contains 1000 elements." << std::endl;
	}

	else { std::cout << "The map could not hold 1000 elements" << std::endl; }

	return 0;
}

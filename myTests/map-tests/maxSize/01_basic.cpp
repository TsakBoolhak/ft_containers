#include "mapTests.hpp"
#include <iostream>

int	maxSize_basic() {

	int	i;
	NAMESPACE::map<int, int> myMap;

	if ( myMap.max_size() > 1000 ) {

		for ( i = 0; i < 1000 ; ++i ) { myMap[i] = 0; }
		std::cout << "The map contains 1000 elements." << std::endl;
	}

	else { std::cout << "The map could not hold 1000 elements" << std::endl; }

	return 0;
}

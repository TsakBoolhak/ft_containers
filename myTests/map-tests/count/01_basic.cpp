#include "mapTests.hpp"
#include <iostream>

int	count_basic() {

	NAMESPACE::map<char, int> myMap;
	char	c;

	myMap['a']=101;
	myMap['c']=202;
	myMap['f']=303;

	for ( c = 'a'; c < 'h'; c++) {

		std::cout << c << " is ";
		if ( myMap.count(c) == 0 )
			std::cout << "not ";
		std::cout << "an element of myMap" << std::endl;
	}

	return 0;
}

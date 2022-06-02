#include "mapTests.hpp"
#include <iostream>

int	empty_basic() {

	NAMESPACE::map<char, int> myMap;

	myMap['a']=10;
	myMap['b']=20;
	myMap['c']=30;

	while ( !myMap.empty() ) {

		std::cout << myMap.begin()->first << "=>" << myMap.begin()->second << std::endl;
		myMap.erase( myMap.begin() );
	}

	return 0;
}

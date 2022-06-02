#include "mapTests.hpp"
#include <iostream>

int	keyComp_basic() {

	NAMESPACE::map< char, int > myMap;

	NAMESPACE::map< char, int >::key_compare myComp = myMap.key_comp();

	myMap['a']=100;
	myMap['b']=200;
	myMap['c']=300;

	std::cout << "myMap contains"<< std::endl;

	char highest = myMap.rbegin()->first;

	NAMESPACE::map< char, int >::iterator it = myMap.begin();
	do {

		std::cout << it->first << " => " << it->second << std::endl;
	} while ( myComp( ( *it++ ).first, highest ) );

	std::cout << std::endl;
	return 0;
}

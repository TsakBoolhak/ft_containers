#include "mapTests.hpp"
#include <iostream>

int	valueComp_basic() {

	NAMESPACE::map< char, int > myMap;

	myMap['x']=1001;
	myMap['y']=2002;
	myMap['z']=3003;

	std::cout << "myMap contains"<< std::endl;

	NAMESPACE::pair< char, int > highest = *myMap.rbegin();

	NAMESPACE::map< char, int >::iterator it = myMap.begin();
	do {

		std::cout << it->first << " => " << it->second << std::endl;
	} while ( myMap.value_comp()( *it++,  highest ) );

	return 0;
}

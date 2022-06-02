#include "mapTests.hpp"
#include <iostream>

int	find_basic() {

	NAMESPACE::map<char, int> myMap;
	NAMESPACE::map<char, int>::iterator it;

	myMap['a']=50;
	myMap['b']=100;
	myMap['c']=150;
	myMap['d']=200;

	it = myMap.find( 'b' );
	if ( it != myMap.end() )
		myMap.erase( it );

	std::cout << "elements in myMap:" << std::endl;
	std::cout << "a =>" << myMap.find( 'a' )->second << std::endl;
	std::cout << "c =>" << myMap.find( 'c' )->second << std::endl;
	std::cout << "d =>" << myMap.find( 'd' )->second << std::endl;

	return 0;
}

#include "mapTests.hpp"
#include <iostream>

int	erase_basic() {

	NAMESPACE::map<char, int> myMap;
	NAMESPACE::map<char, int>::iterator it;

	myMap['a']=10;
	myMap['b']=20;
	myMap['c']=30;
	myMap['d']=40;
	myMap['e']=50;
	myMap['f']=60;

	it = myMap.find('b');
	myMap.erase(it);

	myMap.erase('c');

	it = myMap.find('e');
	myMap.erase( it, myMap.end() );

	for ( it = myMap.begin(); it != myMap.end(); ++it)
		std::cout << it->first << "=>" << it->second << std::endl;

	return 0;
}

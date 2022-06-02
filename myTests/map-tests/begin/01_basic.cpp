#include "mapTests.hpp"
#include <iostream>

int	begin_basic() {

	NAMESPACE::map<char, int> myMap;

	myMap['b']=100;
	myMap['a']=200;
	myMap['c']=300;

	for ( NAMESPACE::map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it)
		std::cout << it->first << "=>" << it->second << std::endl;

	return 0;
}

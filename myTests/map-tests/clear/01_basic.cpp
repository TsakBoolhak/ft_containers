#include "mapTests.hpp"
#include <iostream>

int	clear_basic() {

	NAMESPACE::map<char, int> myMap;

	myMap['x']=100;
	myMap['y']=200;
	myMap['z']=300;

	std::cout << "myMap contains:" << std::endl;
	for ( NAMESPACE::map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it)
		std::cout << it->first << "=>" << it->second << std::endl;

	myMap.clear();
	myMap['a']=1101;
	myMap['b']=2202;

	std::cout << "myMap contains:" << std::endl;
	for ( NAMESPACE::map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it)
		std::cout << it->first << "=>" << it->second << std::endl;

	return 0;
}

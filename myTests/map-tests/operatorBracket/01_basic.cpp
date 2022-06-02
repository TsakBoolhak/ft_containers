#include "mapTests.hpp"
#include <iostream>
#include <string>

int	operatorBracket_basic() {

	NAMESPACE::map< char, std::string > myMap;

	myMap['a']="an element";
	myMap['b']="another element";
	myMap['c']=myMap['b'];

	std::cout << "myMap['a'] is " << myMap['a'] << std::endl;
	std::cout << "myMap['b'] is " << myMap['b'] << std::endl;
	std::cout << "myMap['c'] is " << myMap['c'] << std::endl;
	std::cout << "myMap['d'] is " << myMap['d'] << std::endl;

	std::cout << "myMap now contains " << myMap.size() << " elements" << std::endl;

	return 0;
}

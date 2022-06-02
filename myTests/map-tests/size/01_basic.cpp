#include "mapTests.hpp"
#include <iostream>

int	size_basic() {

	NAMESPACE::map<char, int> myMap;

	myMap['a']=101;
	myMap['b']=202;
	myMap['c']=302;

	std::cout << "myMap.size() is " << myMap.size() << std::endl;

	return 0;
}

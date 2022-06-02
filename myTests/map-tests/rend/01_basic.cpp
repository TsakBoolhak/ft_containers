#include "mapTests.hpp"
#include <iostream>

int	rend_basic() {

	NAMESPACE::map<char, int> myMap;

	myMap['x']=100;
	myMap['y']=200;
	myMap['z']=300;

	NAMESPACE::map<char, int>::reverse_iterator rit;
	for ( rit = myMap.rbegin(); rit != myMap.rend(); ++rit)
		std::cout << rit->first << "=>" << rit->second << std::endl;

	return 0;
}

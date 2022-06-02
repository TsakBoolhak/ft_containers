#include "mapTests.hpp"
#include <iostream>

int	operatorEqual_basic() {

	NAMESPACE::map< char, int > first;
	NAMESPACE::map< char, int > second;

	first['x']=8;
	first['y']=16;
	first['z']=32;

	second = first;
	first = NAMESPACE::map< char, int > ();

	std::cout << "Size of first: " << first.size() << std::endl;
	std::cout << "Size of second: " << second.size() << std::endl;

	return 0;
}

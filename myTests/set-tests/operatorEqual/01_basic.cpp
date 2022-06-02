#include "setTests.hpp"
#include <iostream>

int	operatorEqual_basic() {

	int	myInts[] = { 12, 82, 37, 64, 15 };
	NAMESPACE::set< int > first ( myInts, myInts + 5 );
	NAMESPACE::set< int > second;

	second = first;
	first = NAMESPACE::set< int > ();

	std::cout << "Size of first: " << first.size() << std::endl;
	std::cout << "Size of second: " << second.size() << std::endl;

	return 0;
}

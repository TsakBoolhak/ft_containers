#include "setTests.hpp"
#include <iostream>

int	swap_basic() {

	int	myInts[] = { 12, 75, 10, 32, 20, 25 };
	NAMESPACE::set< int > first ( myInts, myInts + 3 );
	NAMESPACE::set< int > second ( myInts + 3, myInts + 6 );

	first.swap( second );

	std::cout << "first contains:";
	for ( NAMESPACE::set< int >::iterator it = first.begin(); it != first.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	std::cout << "second contains:";
	for ( NAMESPACE::set< int >::iterator it = second.begin(); it != second.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}

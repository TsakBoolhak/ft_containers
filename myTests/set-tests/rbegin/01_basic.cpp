#include "setTests.hpp"
#include <iostream>

int	rbegin_basic() {

	int	myInts[] = { 21, 64, 17, 78, 49 };
	NAMESPACE::set< int > mySet ( myInts, myInts + 5 );

	NAMESPACE::set< int >::reverse_iterator rit;

	std::cout << "mySet contains:";
	for ( rit = mySet.rbegin(); rit != mySet.rend(); ++rit) { std::cout << ' ' << *rit; }

	std::cout << std::endl;

	return 0;
}

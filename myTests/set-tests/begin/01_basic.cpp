#include "setTests.hpp"
#include <iostream>

int	begin_basic() {

	int	myInts[] = {75,23,65,42,13};
	NAMESPACE::set<int> mySet (myInts, myInts+5);

	std::cout << "mySet contains:";
	for ( NAMESPACE::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it )
		std::cout << ' ' << *it;

	std::cout << std::endl;

	return 0;
}

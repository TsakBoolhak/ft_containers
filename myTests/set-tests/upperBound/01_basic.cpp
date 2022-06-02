#include "setTests.hpp"
#include <iostream>

int	upperBound_basic() {

	NAMESPACE::set<int> mySet;
	NAMESPACE::set<int>::iterator itlow, itup;

	for ( int i = 1; i < 10; i++ ) { mySet.insert( i * 10 ); }

	itlow = mySet.lower_bound ( 30 );
	itup = mySet.upper_bound ( 60 );

	mySet.erase(itlow, itup);

	std::cout << "mySet contains:";
	for ( NAMESPACE::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) { std::cout << ' ' << *it; }
	std::cout << std::endl;

	return 0;
}

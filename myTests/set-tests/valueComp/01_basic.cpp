#include "setTests.hpp"
#include <iostream>

int	valueComp_basic() {

	NAMESPACE::set<int > mySet;

	NAMESPACE::set<int >::value_compare myComp = mySet.value_comp();

	for ( int i = 0; i <= 5; i++ ) { mySet.insert( i ); }

	std::cout << "mySet contains:";

	int highest = *mySet.rbegin();
	NAMESPACE::set<int >::iterator it = mySet.begin();
	do { std::cout << ' ' << *it; } while ( myComp( *(++it), highest ) );

	std::cout << std::endl;

	return 0;
}

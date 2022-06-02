#include "setTests.hpp"
#include <iostream>

int	keyComp_basic() {

	NAMESPACE::set<int > mySet;
	int	highest;

	NAMESPACE::set<int >::key_compare myComp = mySet.key_comp();

	for ( int i = 0; i <= 5; i++ ) { mySet.insert( i ); }

	std::cout << "mySet contains:";

	highest = *mySet.rbegin();
	NAMESPACE::set<int >::iterator it = mySet.begin();
	do { std::cout << ' ' << *it; } while ( myComp( *(++it), highest ) );

	std::cout << std::endl;

	return 0;
}

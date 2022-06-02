#include "setTests.hpp"
#include <iostream>

int	find_basic() {

	NAMESPACE::set<int> mySet;
	NAMESPACE::set<int>::iterator it;

	for ( int i = 1; i <= 5; i++ ) { mySet.insert( i * 10 ); }

	it = mySet.find( 20 );
	mySet.erase( it );
	mySet.erase( mySet.find( 40 ) );

	std::cout << "mySet contains: ";
	for ( it = mySet.begin(); it != mySet.end(); ++it ) { std::cout << ' ' << *it; }
	std::cout << std::endl;

	return 0;
}

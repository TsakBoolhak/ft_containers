#include "setTests.hpp"
#include <iostream>

int	erase_basic() {

	NAMESPACE::set<int> mySet;
	NAMESPACE::set<int>::iterator it;

	for ( int i = 1; i< 10; i++ ) { mySet.insert( i * 10 ); }

	it = mySet.begin();
	++it;

	mySet.erase( it );

	mySet.erase( 40 );

	it = mySet.find( 60 );
	mySet.erase( it, mySet.end() );

	std::cout << "mySet contains:";
	for ( it = mySet.begin(); it != mySet.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}

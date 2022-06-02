#include "setTests.hpp"
#include <iostream>

int	insert_basic() {

	NAMESPACE::set<int > mySet;
	NAMESPACE::set<int >::iterator it;
	NAMESPACE::pair< NAMESPACE::set< int >::iterator, bool> ret;

	for ( int i = 1; i <= 5; i++ ) { mySet.insert( i * 10 ); }

	ret = mySet.insert( 20 );

	if ( ret.second == false ) { it = ret.first; }

	mySet.insert( it, 25 );
	mySet.insert( it, 24 );
	mySet.insert( it, 26 );

	int	myInts[] = { 5, 10, 15 };
	mySet.insert( myInts, myInts + 3 );

	std::cout << "myMap contains:";
	for ( it = mySet.begin(); it != mySet.end(); ++it )
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}

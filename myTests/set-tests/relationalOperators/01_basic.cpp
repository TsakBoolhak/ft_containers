#include "setTests.hpp"
#include <iostream>

int	relationalOperators_basic() {

	NAMESPACE::set< int > foo, bar;

	foo.insert( 10 );
	foo.insert( 40 );

	bar.insert( 20 );
	bar.insert( 30 );

	if ( foo == bar ) { std::cout << "foo and bar are equal" << std::endl; }
	if ( foo != bar ) { std::cout << "foo and bar are not equal" << std::endl; }
	if ( foo <  bar ) { std::cout << "foo is less than bar" << std::endl; }
	if ( foo >  bar ) { std::cout << "foo is greater than bar" << std::endl; }
	if ( foo <= bar ) { std::cout << "foo is less than or equal to bar" << std::endl; }
	if ( foo >= bar ) { std::cout << "foo is greater than or equal to bar" << std::endl; }

	return 0;
}

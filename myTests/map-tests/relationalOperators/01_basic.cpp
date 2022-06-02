#include "mapTests.hpp"
#include <iostream>

int	relationalOperators_basic() {

	NAMESPACE::map<char, int> foo, bar;

	foo['a']=100;
	foo['b']=200;

	bar['a']=10;
	bar['z']=1000;

	if ( foo == bar ) { std::cout << "foo and bar are equal" << std::endl; }
	if ( foo != bar ) { std::cout << "foo and bar are not equal" << std::endl; }
	if ( foo <  bar ) { std::cout << "foo is less than bar" << std::endl; }
	if ( foo >  bar ) { std::cout << "foo is greater than bar" << std::endl; }
	if ( foo <= bar ) { std::cout << "foo is less than or equal to bar" << std::endl; }
	if ( foo >= bar ) { std::cout << "foo is greater than or equal to bar" << std::endl; }

	return 0;
}

#include "setTests.hpp"
#include <iostream>

int	getAllocator_basic() {

	NAMESPACE::set<int> mySet;
	int	*p;
	unsigned int i;

	//allocate an array of 5 elements using mySet's allocator:
	p = mySet.get_allocator().allocate(5);

	//assing some values to array
	for ( i = 0; i <5; i++) { p[i] = (i + 1) * 10; }

	std::cout << "The allocated array contains: ";
	for ( i = 0; i < 5; i++ ) { std::cout << ' ' << p[i]; }
	std::cout << std::endl;

	mySet.get_allocator().deallocate(p, 5);

	return 0;
}

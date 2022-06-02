#include "mapTests.hpp"
#include <iostream>

int	getAllocator_basic() {

	int	psize;
	NAMESPACE::map<char, int> myMap;
	NAMESPACE::pair<const char, int>* p;

	//allocate an array of 5 elements using myMap's allocator:
	p = myMap.get_allocator().allocate(5);

	//assing some values to array
	psize = sizeof( NAMESPACE::map<char, int>::value_type ) * 5;

	std::cout << "The allocated array has a size of " << psize << " bytes" << std::endl;

	myMap.get_allocator().deallocate(p, 5);

	return 0;
}

#include "vectorTests.hpp"
#include <iostream>

int	capacity_assignFill() {

	NAMESPACE::vector< int > myVec;
	myVec.assign(7, 42);
	std::cout << "myVec: " << myVec.capacity() << std::endl;

	return 0;
}

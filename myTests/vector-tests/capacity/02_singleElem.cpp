#include "vectorTests.hpp"
#include <iostream>

int	capacity_singleElem() {

	NAMESPACE::vector< int > myVec;
	myVec.push_back(42);
	std::cout << myVec.capacity() << std::endl;

	return 0;
}

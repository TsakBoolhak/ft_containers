#include "vectorTests.hpp"
#include <iostream>

int	capacity_empty() {

	NAMESPACE::vector< int > myVec;
	std::cout << myVec.capacity() << std::endl;

	return 0;
}

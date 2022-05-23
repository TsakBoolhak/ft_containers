#include "vectorTests.hpp"
#include <iostream>

int	empty_clearedAndRefilledVec() {

	NAMESPACE::vector< int > myVec(1, 42);
	myVec.clear();
	myVec.push_back(101010);
	std::cout << myVec.empty() << std::endl;

	return 0;
}

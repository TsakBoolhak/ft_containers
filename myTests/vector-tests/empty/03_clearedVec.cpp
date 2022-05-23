#include "vectorTests.hpp"
#include <iostream>

int	empty_clearedVec() {

	NAMESPACE::vector< int > myVec(1, 42);
	myVec.clear();
	std::cout << myVec.empty() << std::endl;

	return 0;
}

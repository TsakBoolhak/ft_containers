#include "vectorTests.hpp"
#include <iostream>

int	singleElem() {

	NAMESPACE::vector< int > myVec(1, 42);
	std::cout << myVec.back() << std::endl;

	return 0;
}

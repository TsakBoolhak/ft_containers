#include "vectorTests.hpp"
#include <iostream>

int	empty_filledVec() {

	NAMESPACE::vector< int > myVec(1, 42);
	std::cout << myVec.empty() << std::endl;

	return 0;
}

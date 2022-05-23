#include "vectorTests.hpp"
#include <iostream>

int	empty_emptyVec() {

	NAMESPACE::vector< int > myVec;
	std::cout << myVec.empty() << std::endl;

	return 0;
}

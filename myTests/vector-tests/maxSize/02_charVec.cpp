#include "vectorTests.hpp"
#include <iostream>

int	maxSize_charVec() {

	NAMESPACE::vector< char > myVec;
	std::cout << "max_size : " << myVec.max_size() << std::endl;
	return 0;
}

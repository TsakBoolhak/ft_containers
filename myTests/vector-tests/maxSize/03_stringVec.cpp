#include "vectorTests.hpp"
#include <iostream>
#include <string>

int	maxSize_stringVec() {

	NAMESPACE::vector< std::string > myVec;
	std::cout << "max_size : " << myVec.max_size() << std::endl;
	return 0;
}

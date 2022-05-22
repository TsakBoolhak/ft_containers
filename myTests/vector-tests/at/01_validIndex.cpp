#include "vectorTests.hpp"
#include <iostream>

int	at_validIndex() {

	NAMESPACE::vector< int > myVec(10);
	std::cout << myVec.at(0) << std::endl;

	return 0;
}

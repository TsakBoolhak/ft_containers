
#include "vectorTests.hpp"
#include <iostream>

int	at_indexOnEmptyVec() {

	NAMESPACE::vector< int > myVec;
	std::cout << myVec.at(0) << std::endl;

	return 0;
}

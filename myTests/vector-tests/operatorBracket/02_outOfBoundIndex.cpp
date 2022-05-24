#include "vectorTests.hpp"
#include <iostream>

int	operatorBracket_outOfBoundIndex() {

	NAMESPACE::vector< int > myVec(10);
	std::cout << myVec[10] << std::endl;
	return 0;
}

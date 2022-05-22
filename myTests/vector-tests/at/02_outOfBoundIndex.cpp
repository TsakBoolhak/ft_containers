#include "vectorTests.hpp"
#include <iostream>

int	at_outOfBoundIndex() {

	NAMESPACE::vector< int > myVec(10);
	std::cout << myVec.at(10) << std::endl;

	return 0;
}

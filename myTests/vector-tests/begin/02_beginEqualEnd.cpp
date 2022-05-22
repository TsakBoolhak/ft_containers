#include "vectorTests.hpp"
#include <iostream>

int	begin_equalEnd() {

	NAMESPACE::vector< int > myVec;
	std::cout << (myVec.begin() == myVec.end()) << std::endl;

	return 0;
}

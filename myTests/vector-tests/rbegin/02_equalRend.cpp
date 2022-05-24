#include "vectorTests.hpp"
#include <iostream>

int	rbegin_equalRend() {

	NAMESPACE::vector< int > myVec;
	std::cout << (myVec.rbegin() == myVec.rend()) << std::endl;

	return 0;
}

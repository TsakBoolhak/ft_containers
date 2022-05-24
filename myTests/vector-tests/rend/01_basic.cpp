#include "vectorTests.hpp"
#include <iostream>

int	rend_basic() {

	NAMESPACE::vector< int > myVec;
	for (int i = 0; i < 42 ; i++)
		myVec.push_back(i + 1);
	std::cout << *(myVec.rend()) << std::endl;

	return 0;
}

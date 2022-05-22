#include "vectorTests.hpp"
#include <iostream>

int	begin_basic() {

	NAMESPACE::vector< int > myVec( 10, 42 );
	std::cout << *(myVec.begin()) << std::endl;

	return 0;
}

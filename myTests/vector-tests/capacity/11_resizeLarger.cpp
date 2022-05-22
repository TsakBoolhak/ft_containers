#include "vectorTests.hpp"
#include <iostream>

int	capacity_resizeLarger() {

	NAMESPACE::vector< int > myVec(10, 42);
	std::cout << "myVec: " << myVec.capacity() << std::endl;
	std::cout << std::endl;
	myVec.resize( 55 );
	std::cout << "myVec: " << myVec.capacity() << std::endl;
	std::cout << std::endl;
	return 0;
}

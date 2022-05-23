#include "vectorTests.hpp"
#include <iostream>

int	clear_empty() {

	NAMESPACE::vector< int > myVec;
	std::cout << "size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;
	myVec.clear();
	std::cout << "After clear(), size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;

	return 0;
}

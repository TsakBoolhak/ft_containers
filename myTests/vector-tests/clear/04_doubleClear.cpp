#include "vectorTests.hpp"
#include <iostream>

int	clear_doubleClear() {

	NAMESPACE::vector< int > myVec(10, 42);
	std::cout << "size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;
	myVec.clear();
	std::cout << "After clear(), size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;
	myVec.clear();
	std::cout << "After second clear(), size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;

	return 0;
}

#include "vectorTests.hpp"
#include <iostream>

int	maxSize_vecOfIntVec() {

	NAMESPACE::vector< NAMESPACE::vector< int > >	myVec;
	std::cout << "max_size : " << myVec.max_size() << std::endl;
	return 0;
}

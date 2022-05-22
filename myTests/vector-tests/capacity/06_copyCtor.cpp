#include "vectorTests.hpp"
#include <iostream>

int	capacity_copyCtor() {

	NAMESPACE::vector< int > myVec;
	for (int i = 0 ; i < 42 ; i++)
		myVec.push_back(i + 1);
	std::cout << "myVec: " << myVec.capacity() << std::endl;
	NAMESPACE::vector< int > myCopyVec( myVec );
	std::cout << "myCopyVec: " << myCopyVec.capacity() << std::endl;

	return 0;
}

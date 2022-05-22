#include "vectorTests.hpp"
#include <iostream>

int	capacity_assignRange() {

	NAMESPACE::vector< int > myVec;
	for ( int i = 0 ; i < 42 ; i++ )
		myVec.push_back( i + 1 );
	std::cout << "myVec: " << myVec.capacity() << std::endl;
	std::cout << std::endl;
	NAMESPACE::vector< int > myRangeVec;
	myRangeVec.assign( myVec.begin() + 4, myVec.end() - 8 );
	std::cout << "myRangeVec: " << myRangeVec.capacity() << std::endl;
	return 0;
}

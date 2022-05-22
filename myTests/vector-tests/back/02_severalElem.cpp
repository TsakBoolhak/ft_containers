#include "vectorTests.hpp"
#include <iostream>

int	severalElem() {

	NAMESPACE::vector< int > myVec;
	for ( int i = 0; i < 42; i++ )
		myVec.push_back( i + 1 );
	std::cout << myVec.back() << std::endl;

	return 0;
}

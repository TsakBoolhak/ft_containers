#include <stdexcept>
#include "vectorTests.hpp"
#include <iostream>

int	reserve_badAlloc() {

	NAMESPACE::vector< int > myVec;

	try {
		myVec.reserve( myVec.max_size() - 1 );
	} catch ( const std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}


#include "vectorTests.hpp"
#include <iostream>
#include <stdexcept>

int	at_indexOnEmptyVec() {

	NAMESPACE::vector< int > myVec;
	try {
	
	std::cout << myVec.at(0) << std::endl;
	} catch ( const std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

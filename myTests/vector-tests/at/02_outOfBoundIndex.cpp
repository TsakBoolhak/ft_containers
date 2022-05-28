#include "vectorTests.hpp"
#include <iostream>
#include <stdexcept>

int	at_outOfBoundIndex() {

	NAMESPACE::vector< int > myVec(10);
	try {
		std::cout << myVec.at(10) << std::endl;
	} catch ( const std::exception & e ) {

		std::cout << e.what() << std::endl;
	}

	return 0;
}

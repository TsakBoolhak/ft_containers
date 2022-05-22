#include "vectorTests.hpp"
#include <string>
#include <iostream>

int	defaultIntricatedVectorCtor() {

	NAMESPACE::vector< NAMESPACE::vector< int > > empty;
	std::cout << "size : " << empty.size() << std::endl;
	return 0;
}

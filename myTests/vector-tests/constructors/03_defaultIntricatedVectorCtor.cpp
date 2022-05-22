#include "vectorTests.hpp"
#include <iostream>

int	defaultIntricatedVectorCtor() {

	NAMESPACE::vector< NAMESPACE::vector< int > > empty;
	std::cout << "size : " << empty.size() << std::endl;
	std::cout << "empty : " << empty.empty() << std::endl;
	return 0;
}

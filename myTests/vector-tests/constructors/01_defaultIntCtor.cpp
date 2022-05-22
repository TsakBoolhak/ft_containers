#include "vectorTests.hpp"
#include <iostream>

int	defaultIntCtor() {

	NAMESPACE::vector< int > empty;
	std::cout << "size : " << empty.size() << std::endl;
	std::cout << "empty : " << empty.empty() << std::endl;
	return 0;
}

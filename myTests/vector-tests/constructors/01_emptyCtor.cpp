#include "vectorTests.hpp"
#include <string>
#include <iostream>

int	defaultIntCtor() {

	NAMESPACE::vector< int > empty;
	std::cout << "size : " << empty.size() << std::endl;
	return 0;
}

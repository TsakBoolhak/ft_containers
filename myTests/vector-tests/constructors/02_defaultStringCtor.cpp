#include "vectorTests.hpp"
#include <string>
#include <iostream>

int	defaultStringCtor() {

	NAMESPACE::vector< std::string > empty;
	std::cout << "size : " << empty.size() << std::endl;
	return 0;
}

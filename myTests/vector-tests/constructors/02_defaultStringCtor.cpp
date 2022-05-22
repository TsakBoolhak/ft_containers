#include "vectorTests.hpp"
#include <string>
#include <iostream>

int	defaultStringCtor() {

	NAMESPACE::vector< std::string > empty;
	std::cout << "size : " << empty.size() << std::endl;
	std::cout << "empty : " << empty.empty() << std::endl;
	return 0;
}

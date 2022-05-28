#include "stackTests.hpp"
#include <iostream>

int	size_basic() {

	NAMESPACE::stack<int> myInts;
	std::cout << "0. size: " << myInts.size() << std::endl;

	for (int i=0; i<5; i++) myInts.push(i);
	std::cout << "1. size: " << myInts.size() << std::endl;

	myInts.pop();
	std::cout << "2. size: " << myInts.size() << std::endl;

	return 0;
}

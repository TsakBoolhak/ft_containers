#include "vectorTests.hpp"
#include <iostream>

int	size_basic() {

	NAMESPACE::vector< int > myVec;
	std::cout << "0. size : " << myVec.size() << std::endl;

	for (int i=0; i<10; i++) myVec.push_back(i);
	std::cout << "1. size : " << myVec.size() << std::endl;

	myVec.insert(myVec.end(),10,100);
	std::cout << "2. size : " << myVec.size() << std::endl;

	myVec.pop_back();
	std::cout << "3. size : " << myVec.size() << std::endl;

	return 0;
}

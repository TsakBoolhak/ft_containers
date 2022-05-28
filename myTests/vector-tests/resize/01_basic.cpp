#include "vectorTests.hpp"
#include <iostream>

int	resize_basic() {

	NAMESPACE::vector< int > myVec;

	for (int i=1;i<10;i++) myVec.push_back(i);

	myVec.resize(5);
	myVec.resize(8, 100);
	myVec.resize(12);

	std::cout << "my vector contains:";
	for (NAMESPACE::vector< int >::size_type i=0;i<myVec.size();++i)
		std::cout << ' ' << myVec[i];
	std::cout << std::endl;

	return 0;
}

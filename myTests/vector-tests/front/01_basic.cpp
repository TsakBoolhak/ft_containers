#include "vectorTests.hpp"
#include <iostream>

int	front_basic() {

	NAMESPACE::vector< int > myVec;
	for ( NAMESPACE::vector< int >::size_type i = 0; i < 42 ; ++i ) {
		myVec.push_back(i + 1);
		myVec.front() += i;
	}
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}

#include "vectorTests.hpp"
#include <iostream>

int	erase_singleElem() {

	NAMESPACE::vector< int > myVec;
	for ( NAMESPACE::vector< int >::size_type i = 0; i < 42 ; ++i )
		myVec.push_back(i + 1);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.begin());
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.begin() + 10);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.end() - 1);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;

	return 0;
}

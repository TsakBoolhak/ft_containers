#include "vectorTests.hpp"
#include <iostream>

int	erase_range() {

	NAMESPACE::vector< int > myVec;
	for ( NAMESPACE::vector< int >::size_type i = 0; i < 42 ; ++i )
		myVec.push_back(i + 1);
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.begin(), myVec.begin() + 5);
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.begin(), myVec.begin());
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.begin() + 10, myVec.end() - 10);
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.erase(myVec.begin(), myVec.end());
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;

	return 0;
}

#include "vectorTests.hpp"
#include <iostream>

int	insert_range() {

	NAMESPACE::vector< int > sourceVec;
	for ( int i = 0; i < 42 ; ++i )
		sourceVec.push_back(i + 1);
	
	NAMESPACE::vector< int > myVec;
	myVec.insert( myVec.end(), sourceVec.end() - 5, sourceVec.end());
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.insert( myVec.begin() + 2, sourceVec.begin() + 20, sourceVec.end() - 6);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	myVec.insert( myVec.begin(), sourceVec.begin(), sourceVec.begin() );
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;

	return 0;
}

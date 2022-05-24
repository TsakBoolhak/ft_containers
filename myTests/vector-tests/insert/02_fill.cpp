#include "vectorTests.hpp"
#include <iostream>

int	insert_fill() {

	NAMESPACE::vector< int > myVec;
	myVec.insert( myVec.begin(), 5, 42);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	myVec.insert( myVec.begin(), 0, 33);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	myVec.insert( myVec.begin() + 1, 10, 101010);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	myVec.insert( myVec.end(), 3, 9);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	myVec.clear();
	std::cout << std::endl;

	myVec.insert( myVec.end(), 3, 101);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}

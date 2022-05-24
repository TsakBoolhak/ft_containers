#include "vectorTests.hpp"
#include <iostream>

int	popBack_otherTests() {

	NAMESPACE::vector<int> myVec;
	for ( int i = 0 ; i < 42 ; i++ )
		myVec.push_back( i + 1 );
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;

	myVec.pop_back();

	std::cout << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	myVec.insert(myVec.end(), myVec.end() - 10, myVec.end());
	std::cout << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;

	myVec.pop_back();
	std::cout << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	while ( myVec.empty() == false ) {

		myVec.pop_back();
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if ( it + 1 != myVec.end() )
				std::cout << " ";
		}
	std::cout << std::endl;
	}
	return 0;
}

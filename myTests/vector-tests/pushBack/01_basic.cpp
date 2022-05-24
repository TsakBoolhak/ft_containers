#include "vectorTests.hpp"
#include <iostream>

int	pushBack_basic() {

	NAMESPACE::vector< int > myVec;

	for ( int i = 1 ; i <= 42 ; ++i )
		myVec.push_back(i % 10);
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != myVec.end() )
			std::cout << " ";
	}
	std::cout<< std::endl;
	return 0;
}

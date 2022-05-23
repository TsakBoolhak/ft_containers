#include "vectorTests.hpp"
#include <iostream>

int	front_vecOfVec() {

	NAMESPACE::vector< NAMESPACE::vector< int > > myVec( 5, NAMESPACE::vector< int > () );
	int i = 1;
	for ( NAMESPACE::vector< NAMESPACE::vector< int > >::iterator it = myVec.begin() ; it != myVec.end() ; it++) {
		for ( int j = 1 ; j < 21 ; j++ ) {
			it->push_back( j * i );
		}
		i++;
	}
	for ( NAMESPACE::vector< NAMESPACE::vector< int > >::iterator it = myVec.begin() ; it != myVec.end() ; it++) {
		
		for ( NAMESPACE::vector< NAMESPACE::vector< int > >::iterator it2 = it ; it2 != myVec.end() ; it2++ ) {
			
			for ( NAMESPACE::vector< int >::iterator it3 = it2->begin() ; it3 != it2->end() ; it3++ ) {
				it->front() += *it3;
			}
		}
	}

	i = 1;
	for ( NAMESPACE::vector< NAMESPACE::vector< int > >::iterator it = myVec.begin() ; it != myVec.end() ; it++) {

		std::cout << "vector #"	<< i << " : ";
		for ( NAMESPACE::vector< int >::iterator it2 = it->begin() ; it2 != it->end() ; it2++ ) {

			std::cout << *it2;
			if ( it2 + 1 != it->end() )
				std::cout << " ";
		}
		std::cout << std::endl;
		i++;
	}
	return 0;
}

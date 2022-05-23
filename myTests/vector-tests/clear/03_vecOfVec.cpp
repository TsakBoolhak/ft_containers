#include "vectorTests.hpp"
#include <iostream>

int	clear_vecOfVec() {

	NAMESPACE::vector< NAMESPACE::vector< int > > myVec( 10, NAMESPACE::vector< int > ( 15, 42 ) );
	int	i = 1;
	for ( NAMESPACE::vector< NAMESPACE::vector< int > >::iterator it = myVec.begin() ; it != myVec.end() ; it++) {
		std::cout << "inner vector #" << i << ", size : " << it->size() << " capacity : " << it->capacity() << std::endl;
		i++;
	}
	std::cout << " outer vector, size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;
	std::cout << "Now let's clear all inner vectors" << std::endl;
	i = 1;
	for ( NAMESPACE::vector< NAMESPACE::vector< int > >::iterator it = myVec.begin() ; it != myVec.end() ; it++) {
		it->clear();
		std::cout << "After clear inner vector #" << i << ", size : " << it->size() << " capacity : " << it->capacity() << std::endl;
		i++;
	}
	std::cout << "Now let's clear outer vector" << std::endl;
	myVec.clear();
	std::cout << "After clear(), size : " << myVec.size() << " capacity : " << myVec.capacity() << std::endl;

	return 0;
}

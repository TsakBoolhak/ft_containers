#include "vector.hpp"
#include <vector>
#include <iostream>

#ifndef REAL_STD
# define NAMESPACE ft

# else
# define NAMESPACE std

#endif


int	main() {

	NAMESPACE::vector<int> myVec;

	std::cout << "--------------------VECTOR----------------------" << std::endl;
	std::cout << "-----------DEFAULT CTOR-----------" << std::endl;
	std::cout << "myVec.empty() : " << myVec.empty() << std::endl;
	std::cout << "myVec.capacity() : " << myVec.capacity() << std::endl;
	std::cout << "myVec.size() : " << myVec.size() << std::endl;

	myVec.push_back( 42 );
	std::cout << "push_back( 42 );" << std::endl;
	std::cout << "myVec.empty() : " << myVec.empty() << std::endl;
	std::cout << "myVec.capacity() : " << myVec.capacity() << std::endl;
	std::cout << "myVec.size() : " << myVec.size() << std::endl;
	std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
	std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;

	myVec.push_back( 101010 );
	std::cout << "push_back( 101010 );" << std::endl;
	std::cout << "myVec.empty() : " << myVec.empty() << std::endl;
	std::cout << "myVec.capacity() : " << myVec.capacity() << std::endl;
	std::cout << "myVec.size() : " << myVec.size() << std::endl;
	std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
	std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;

	return 0;
}

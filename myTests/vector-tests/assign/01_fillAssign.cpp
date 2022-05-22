#include "vectorTests.hpp"
#include <iostream>

int	fillAssign() {

	{
		NAMESPACE::vector< int > myVec;
		std::cout << "vector< int > myVec;" << std::endl;
		std::cout << "size : " << myVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myVec.end())
				std::cout << " ";
		}
		std::cout << std::endl;
		myVec.assign( 10, 42 );
		std::cout << "myVec.assign( 10, 42 );" << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myVec.end())
				std::cout << " ";
		}
		std::cout << std::endl;
	}

		std::cout << std::endl;

	{
		NAMESPACE::vector< int > myVec(10, 0);
		std::cout << "vector< int > myVec(10, 0);" << std::endl;
		std::cout << "size : " << myVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myVec.end())
				std::cout << " ";
		}
		std::cout << std::endl;
		myVec.assign( 10, 42 );
		std::cout << "myVec.assign( 10, 42 );" << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myVec.end())
				std::cout << " ";
		}
		std::cout << std::endl;
	}

		std::cout << std::endl;

	{
		NAMESPACE::vector< int > myVec(10, 42);
		std::cout << "vector< int > myVec(10, 42);" << std::endl;
		std::cout << "size : " << myVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myVec.end())
				std::cout << " ";
		}
		std::cout << std::endl;
		myVec.assign( 0, 3 );
		std::cout << "myVec.assign( 0, 3 );" << std::endl;
		std::cout << "size : " << myVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myVec.end())
				std::cout << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}

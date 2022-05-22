#include "vectorTests.hpp"
#include <iostream>

int	rangeAssign() {

	NAMESPACE::vector< int > myVec;
	for ( NAMESPACE::vector< int >::size_type i = 0; i < 42 ; ++i )
		myVec.push_back(i + 1);
	std::cout << "myVec" << std::endl;
	std::cout << "size : " << myVec.size() << std::endl;
	for ( NAMESPACE::vector< int >::iterator it = myVec.begin() ; it != myVec.end() ; it++ ) {

		std::cout << *it;
		if (it + 1 != myVec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		NAMESPACE::vector< int > myRangeVec;
		myRangeVec.assign( myVec.begin(), myVec.end());
		std::cout << "vector< int > myRangeVec;" << std::endl;
		std::cout << "myRangeVec.assign( myVec.begin(), myVec.end() );" << std::endl;
		std::cout << "myRangeVec" << std::endl;
		std::cout << "size : " << myRangeVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myRangeVec.begin() ; it != myRangeVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myRangeVec.end())
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		NAMESPACE::vector< int > myRangeVec;
		myRangeVec.assign( myVec.begin(), myVec.begin() + 5 );
		std::cout << "vector< int > myRangeVec;" << std::endl;
		std::cout << "myRangeVec.assign( myVec.begin(), myVec.begin() + 5 );" << std::endl;
		std::cout << "myRangeVec" << std::endl;
		std::cout << "size : " << myRangeVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myRangeVec.begin() ; it != myRangeVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myRangeVec.end())
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		NAMESPACE::vector< int > myRangeVec;
		myRangeVec.assign( myVec.begin(), myVec.begin() );
		std::cout << "vector< int > myRangeVec;" << std::endl;
		std::cout << "myRangeVec.assign( myVec.begin(), myVec.begin() );" << std::endl;
		std::cout << "myRangeVec" << std::endl;
		std::cout << "size : " << myRangeVec.size() << std::endl;
		for ( NAMESPACE::vector< int >::iterator it = myRangeVec.begin() ; it != myRangeVec.end() ; it++ ) {

			std::cout << *it;
			if (it + 1 != myRangeVec.end())
				std::cout << " ";
		}
	}
	std::cout << std::endl;

	return 0;
}

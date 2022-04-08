#include <iostream>
#include <stdexcept>

#ifndef REAL_STD
# define NAMESPACE ft
# define VERSION "ft"
# include "vector.hpp"

# else
# define NAMESPACE std
# define VERSION "std"
# include <vector>
#endif


int	main() {


	std::cout << "Testing namespace " << VERSION << std::endl;
	std::cout << "--------------------VECTOR----------------------" << std::endl;
	std::cout << "-----------DEFAULT CTOR-----------" << std::endl;
	NAMESPACE::vector<int> myVec;
	std::cout << "empty() : " << myVec.empty() << std::endl;
	std::cout << "capacity() : " << myVec.capacity() << std::endl;
	std::cout << "size() : " << myVec.size() << std::endl;
	std::cout << "at( 0 ) : ";
	try {

		std::cout << myVec.at( 0 );
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what();
	}
	std::cout << std::endl;

	std::cout << std::endl;

	myVec.push_back( 42 );
	std::cout << "push_back( 42 );" << std::endl;
	std::cout << "empty() : " << myVec.empty() << std::endl;
	std::cout << "capacity() : " << myVec.capacity() << std::endl;
	std::cout << "size() : " << myVec.size() << std::endl;
	std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
	std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;
	std::cout << "front() : " << myVec.front() << std::endl;
	std::cout << "back() : " << myVec.back() << std::endl;
	std::cout << "at( 0 ) : " << myVec.at( 0 ) << std::endl;
	std::cout << "at( 1 ) : ";
	try {

		std::cout << myVec.at( 1 );
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "[0] : " << myVec[0] << std::endl;

	std::cout << std::endl;

	myVec.push_back( 101010 );
	std::cout << "push_back( 101010 );" << std::endl;
	std::cout << "empty() : " << myVec.empty() << std::endl;
	std::cout << "capacity() : " << myVec.capacity() << std::endl;
	std::cout << "size() : " << myVec.size() << std::endl;
	std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
	std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;
	std::cout << "front() : " << myVec.front() << std::endl;
	std::cout << "back() : " << myVec.back() << std::endl;
	std::cout << "at( 0 ) : " << myVec.at( 0 ) << std::endl;
	std::cout << "at( 1 ) : " << myVec.at( 1 ) << std::endl;
	std::cout << "at( 2 ) : ";
	try {

		std::cout << myVec.at( 2 );
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "[0] : " << myVec[0] << std::endl;
	std::cout << "[1] : " << myVec[1] << std::endl;

	std::cout << std::endl;

	for (unsigned int i = 0 ; i <= 10 ; i++ ) {

		myVec.push_back( i );
		std::cout << "push_back( " << i << " );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
		std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;
		std::cout << "front() : " << myVec.front() << std::endl;
		std::cout << "back() : " << myVec.back() << std::endl;
		try {

			for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
				std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
		} catch ( std::out_of_range const & e ) {
			std::cout << e.what() << std::endl;
		}
		for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
			std::cout << "[" << j << "] : " << myVec[j] << std::endl;
		std::cout << std::endl;
	}

	std::cout << "-----------COPY CTOR-----------" << std::endl;
	NAMESPACE::vector<int> myCopyVec( myVec );
	myVec.clear();
	std::cout << "empty() : " << myCopyVec.empty() << std::endl;
	std::cout << "capacity() : " << myCopyVec.capacity() << std::endl;
	std::cout << "size() : " << myCopyVec.size() << std::endl;
	std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
	std::cout << "*(rbegin()) : " << *( myCopyVec.rbegin() ) << std::endl;
	std::cout << "front() : " << myCopyVec.front() << std::endl;
	std::cout << "back() : " << myCopyVec.back() << std::endl;
	std::cout << "testing iterators to check content of the vec constructed by copy" << std::endl;
	for ( NAMESPACE::vector<int>::iterator it = myCopyVec.begin() ; it < myCopyVec.end() ; ++it )
		std::cout << *it << std::endl;

	std::cout << std::endl;

	NAMESPACE::vector<int>::iterator it = myCopyVec.begin();
	NAMESPACE::vector<int>::const_iterator itConst( it );
	return 0;
}

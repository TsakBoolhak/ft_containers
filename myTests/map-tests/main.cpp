#include "mapTests.hpp"
#include "loadTest.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

#define TEST_NB 24

typedef void (*functionPointer)();

void	myToLower( char & c ) { c = std::tolower(c); }

int	main( int ac, char **av ) {

	std::deque< functionPointer > funcList;
	funcList.push_back( constructor_launcher );
	funcList.push_back( begin_launcher );
	funcList.push_back( clear_launcher );
	funcList.push_back( count_launcher );
	funcList.push_back( empty_launcher );
	funcList.push_back( end_launcher );
	funcList.push_back( equalRange_launcher );
	funcList.push_back( erase_launcher );
	funcList.push_back( find_launcher );
	funcList.push_back( getAllocator_launcher );
	funcList.push_back( insert_launcher );
	funcList.push_back( keyComp_launcher );
	funcList.push_back( lowerBound_launcher );
	funcList.push_back( maxSize_launcher );
	funcList.push_back( operatorEqual_launcher );
	funcList.push_back( operatorBracket_launcher );
	funcList.push_back( rbegin_launcher );
	funcList.push_back( rend_launcher );
	funcList.push_back( size_launcher );
	funcList.push_back( swap_launcher );
	funcList.push_back( upperBound_launcher );
	funcList.push_back( valueComp_launcher );
	funcList.push_back( relationalOperators_launcher );
	funcList.push_back( swapOverload_launcher );

	std::deque< std::string > funcNames;
	funcNames.push_back("constructor");
	funcNames.push_back("begin");
	funcNames.push_back("clear");
	funcNames.push_back("count");
	funcNames.push_back("empty");
	funcNames.push_back("end");
	funcNames.push_back("equal_range");
	funcNames.push_back("erase");
	funcNames.push_back("find");
	funcNames.push_back("get_allocator");
	funcNames.push_back("insert");
	funcNames.push_back("key_comp");
	funcNames.push_back("lower_bound");
	funcNames.push_back("max_size");
	funcNames.push_back("operator=");
	funcNames.push_back("operator[]");
	funcNames.push_back("rbegin");
	funcNames.push_back("rend");
	funcNames.push_back("size");
	funcNames.push_back("swap");
	funcNames.push_back("upper_bound");
	funcNames.push_back("value_comp");
	funcNames.push_back("relational operators");
	funcNames.push_back("swap overload");

	std::deque< bool >	launch;
	if ( ac == 1 )
		launch = std::deque< bool > ( TEST_NB, true );
	else
		launch = std::deque< bool > ( TEST_NB, false );

	for ( int i = 1 ; i < ac ; ++i ) {

		std::string tmp ( av[i] );
		std::for_each( tmp.begin(), tmp.end(), myToLower );
		int j = 0;

		for ( std::deque< std::string >::const_iterator it = funcNames.begin() ; it != funcNames.end() && tmp.compare(*it) != 0 ; ++it)
			j++;

		if ( j < TEST_NB )
			*(launch.begin() + j) = true;
	}
	std::cout << COLOR_RED << "Testing namespace " << COLOR_GREEN << VERSION << COLOR_DEFAULT << std::endl;
	std::deque< bool >::iterator launchIt= launch.begin();
	for ( std::deque< functionPointer >::const_iterator it = funcList.begin() ; it != funcList.end() ; it++, launchIt++ ) {
		if ( *launchIt == true )
			(*it)();
	}
	return 0;
}

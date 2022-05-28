#include "vectorTests.hpp"
#include "loadTest.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

#define TEST_NB 22

typedef void (*functionPointer)();

void	myToLower( char & c ) { c = std::tolower(c); }

int	main( int ac, char **av ) {

	std::deque< functionPointer > funcList;

	funcList.push_back( constructor_launcher );
	funcList.push_back(assign_launcher );
	funcList.push_back(at_launcher );
	funcList.push_back(back_launcher );
	funcList.push_back(begin_launcher );
	funcList.push_back(capacity_launcher );
	funcList.push_back(clear_launcher );
	funcList.push_back(empty_launcher );
	funcList.push_back(end_launcher );
	funcList.push_back(erase_launcher );
	funcList.push_back(front_launcher );
	funcList.push_back(getAllocator_launcher );
	funcList.push_back(insert_launcher );
	funcList.push_back(maxSize_launcher );
	funcList.push_back(operatorEqual_launcher );
	funcList.push_back(operatorBracket_launcher );
	funcList.push_back(popBack_launcher );
	funcList.push_back(pushBack_launcher );
	funcList.push_back(rbegin_launcher );
	funcList.push_back(rend_launcher );
	funcList.push_back(reserve_launcher );
	funcList.push_back(resize_launcher );

	std::deque< bool >	launch ( TEST_NB, false );

	std::deque< std::string > funcNames;
	funcNames.push_back("constructors");
	funcNames.push_back("assign");
	funcNames.push_back("at");
	funcNames.push_back("back");
	funcNames.push_back("begin");
	funcNames.push_back("capacity");
	funcNames.push_back("clear");
	funcNames.push_back("empty");
	funcNames.push_back("end");
	funcNames.push_back("erase");
	funcNames.push_back("front");
	funcNames.push_back("get_allocator");
	funcNames.push_back("insert");
	funcNames.push_back("max_size");
	funcNames.push_back("equal");
	funcNames.push_back("index");
	funcNames.push_back("pop_back");
	funcNames.push_back("push_back");
	funcNames.push_back("rbegin");
	funcNames.push_back("rend");
	funcNames.push_back("reserve");
	funcNames.push_back("resize");
	if ( ac == 1 )
		launch = std::deque< bool > ( TEST_NB, true );

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

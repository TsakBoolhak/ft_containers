#include "stackTests.hpp"
#include "loadTest.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

#define TEST_NB 7

typedef void (*functionPointer)();

void	myToLower( char & c ) { c = std::tolower(c); }

int	main( int ac, char **av ) {

	std::deque< functionPointer > funcList;
	funcList.push_back( constructor_launcher );
	funcList.push_back( empty_launcher );
	funcList.push_back( pop_launcher );
	funcList.push_back( push_launcher );
	funcList.push_back( size_launcher );
	funcList.push_back( top_launcher );
	funcList.push_back( relationalOperators_launcher );

	std::deque< std::string > funcNames;
	funcNames.push_back("constructor");
	funcNames.push_back("empty");
	funcNames.push_back("pop");
	funcNames.push_back("push");
	funcNames.push_back("size");
	funcNames.push_back("top");
	funcNames.push_back("relational");

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

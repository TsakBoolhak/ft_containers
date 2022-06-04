#include <string>
#include <list>
#include <iostream>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "loadTest.hpp"


		TestObj::TestObj( std::string const &testName, std::string const & funcName, int (*testFunc)() ) : testName ( testName ) , funcName ( funcName ), status ( 0 ), testFunc ( testFunc ) {}

//accessors
		std::string const & TestObj::getTestName() const { return testName; }
		std::string const & TestObj::getFuncName() const { return funcName; }
		int					TestObj::getStatus() const { return status; }

//modifiers
		void				TestObj::setTestName( std::string const & name ) { testName = name; }
		void				TestObj::setFuncName( std::string const & name ) { funcName = name; }
		void				TestObj::setStatus( int stat ) { status = stat; }


void	loadTest( std::list< TestObj > & testList, std::string const & funcName, std::string const & testName, int (*testFunc)() ) {

	testList.push_back( TestObj ( testName, funcName, testFunc ) );
}

void	checkIfTestCrashed( TestObj & currentTest ) {

	int	status;

	if ( wait( &status ) < 0) {

		std::cerr << "Error occured while testing (wait returned error)" << std::endl;
		exit( -1 );
	}
	currentTest.setStatus( status );
	if ( WIFSIGNALED( currentTest.getStatus() ) ) {

		if ( WTERMSIG( currentTest.getStatus() ) == SIGSEGV )
			std::cout << COLOR_RED << "Interrupted by Segfault" << COLOR_DEFAULT << std::endl;
		else
			std::cout << COLOR_RED << "Interrupted by a signal" << COLOR_DEFAULT << std::endl;
	}
	else if ( WIFEXITED( currentTest.getStatus() ) ) {

		std::cout << "exit status : " << WEXITSTATUS( currentTest.getStatus() ) << std::endl;
	}
}

void	forkAndTest( TestObj & currentTest ) {

		int	pid = fork();

		if ( pid < 0 ) {

			std::cerr << " Error occured that prevented tests to be launched ( fork() returned error) " << std::endl;
			exit (-1);
		}
		else if ( !pid ) {

			std::cout << COLOR_YELLOW << currentTest.getFuncName() << COLOR_DEFAULT << ":" << COLOR_BLUE << currentTest.getTestName() << COLOR_DEFAULT << ":" << std::endl;
			currentTest.testFunc();
			exit(0);
		}
		else
			checkIfTestCrashed( currentTest );

}

void	launchTests( std::list< TestObj > & testList ) {

	for ( std::list< TestObj >::iterator it = testList.begin() ; it != testList.end() ; ++it ) {

		forkAndTest( *it );
	}
}

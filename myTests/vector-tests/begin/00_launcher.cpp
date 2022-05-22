#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	begin_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Begin", "Basic test", &begin_basic );
	loadTest(testList, "Begin", "Begin equal end on empty vec", &begin_equalEnd );
	loadTest(testList, "Begin", "testing const and non const", &begin_ConstAndNonConst );
	launchTests(testList);
}

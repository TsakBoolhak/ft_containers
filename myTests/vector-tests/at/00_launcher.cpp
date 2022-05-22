#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	at_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "At", "Valid index", &at_validIndex );
	loadTest(testList, "At", "Out Of Bound index", &at_outOfBoundIndex );
	loadTest(testList, "At", "Index on empty vector", &at_indexOnEmptyVec );
	loadTest(testList, "At", "Const and non const", &at_ConstAndNonConst );
	launchTests(testList);
}

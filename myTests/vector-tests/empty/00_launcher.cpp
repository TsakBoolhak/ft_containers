#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	empty_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Empty", "on empty vec", &empty_emptyVec );
	loadTest(testList, "Empty", "on non empty vec", &empty_filledVec );
	loadTest(testList, "Empty", "on cleared vec", &empty_clearedVec );
	loadTest(testList, "Empty", "on cleared and refilled vec", &empty_clearedAndRefilledVec );
	launchTests(testList);
}

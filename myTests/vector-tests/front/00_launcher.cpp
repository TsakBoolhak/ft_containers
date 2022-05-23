#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	front_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Front", "basic tests", &front_basic );
	loadTest(testList, "Front", "vector of vectors", &front_vecOfVec );
	launchTests(testList);
}

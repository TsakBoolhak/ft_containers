#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	reserve_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Reserve", "basic test", &reserve_basic );
	loadTest(testList, "Reserve", "length error", &reserve_lengthError );
	loadTest(testList, "Reserve", "possible bad alloc", &reserve_badAlloc );
	launchTests(testList);
}

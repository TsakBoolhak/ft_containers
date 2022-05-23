#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	clear_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Clear", "basic test", &clear_basic );
	loadTest(testList, "Clear", "on empty vector", &clear_empty );
	loadTest(testList, "Clear", "vector of vectors", &clear_vecOfVec );
	loadTest(testList, "Clear", "double clear", &clear_doubleClear );
	loadTest(testList, "Clear", "clear and pushbacks", &clear_pushBackAfterClear );
	launchTests(testList);
}

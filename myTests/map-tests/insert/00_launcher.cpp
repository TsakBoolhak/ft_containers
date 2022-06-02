#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	insert_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "insert()", "basic tests", &insert_basic);
	launchTests(testList);
}

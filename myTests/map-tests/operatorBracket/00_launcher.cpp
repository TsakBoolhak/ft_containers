#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	operatorBracket_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "operator[]()", "basic tests", &operatorBracket_basic);
	launchTests(testList);
}

#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	assign_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Assign", "Fill assign", &fillAssign);
	loadTest(testList, "Assign", "Fill assign", &rangeAssign);
	launchTests(testList);
}

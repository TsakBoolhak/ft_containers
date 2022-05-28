#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	pop_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "pop", "basic tests", &pop_basic);
	launchTests(testList);
}

#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	popBack_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Pop_back", "basic test", &popBack_basic );
	loadTest(testList, "Pop_back", "some other tests", &popBack_otherTests );
	launchTests(testList);
}

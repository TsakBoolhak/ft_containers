#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	erase_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Erase", "single element", &erase_singleElem );
	loadTest(testList, "Erase", "range of elements", &erase_range );
	launchTests(testList);
}

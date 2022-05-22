#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	capacity_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Capacity", "empty vector", &capacity_empty );
	loadTest(testList, "Capacity", "pushback single element", &capacity_singleElem );
	loadTest(testList, "Capacity", "pushback two elements", &capacity_twoElem );
	loadTest(testList, "Capacity", "pushback three elements", &capacity_threeElem );
	loadTest(testList, "Capacity", "pushback five elements", &capacity_fiveElem );
	loadTest(testList, "Capacity", "copy constructor", &capacity_copyCtor );
	loadTest(testList, "Capacity", "assign by fill", &capacity_assignFill );
	loadTest(testList, "Capacity", "assign by range", &capacity_assignRange );
	loadTest(testList, "Capacity", "assign operation, not enough space", &capacity_assignOperatorNotEnoughSpace );
	loadTest(testList, "Capacity", "assign operation, enough space", &capacity_assignOperatorEnoughSpace );
	loadTest(testList, "Capacity", "resize larger", &capacity_resizeLarger );
	loadTest(testList, "Capacity", "resize shorter", &capacity_resizeShorter );
	launchTests(testList);
}

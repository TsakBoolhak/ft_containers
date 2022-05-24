#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	insert_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Insert", "single elem", &insert_singleElem );
	loadTest(testList, "Insert", "fill", &insert_fill );
	loadTest(testList, "Insert", "range", &insert_range );
	loadTest(testList, "Insert", "mix", &insert_mix );
	launchTests(testList);
}

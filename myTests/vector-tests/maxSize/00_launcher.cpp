#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	maxSize_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "MaxSize", "int vector", &maxSize_intVec );
	loadTest(testList, "MaxSize", "char vector", &maxSize_charVec );
	loadTest(testList, "MaxSize", "string vector", &maxSize_stringVec );
	launchTests(testList);
}

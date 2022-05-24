#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	operatorBracket_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Operator []", "basic test", &operatorBracket_basic );
	loadTest(testList, "Operator []", "out of bound index", &operatorBracket_outOfBoundIndex );
	launchTests(testList);
}

#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	constructor_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Constructors", "Default int Ctor", &defaultIntCtor);
	launchTests(testList);
}

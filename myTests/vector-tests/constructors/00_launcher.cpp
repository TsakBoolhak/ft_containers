#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	constructor_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Constructors", "Default int Ctor", &defaultIntCtor);
	loadTest(testList, "Constructors", "Default string Ctor", &defaultStringCtor);
	loadTest(testList, "Constructors", "Default intricated vector Ctor", &defaultIntricatedVectorCtor);
	loadTest(testList, "Constructors", "Fill int Ctor", &fillIntCtor);
	loadTest(testList, "Constructors", "Range int Ctor", &rangeIntCtor);
	loadTest(testList, "Constructors", "Copy int Ctor", &copyIntCtor);
	launchTests(testList);
}

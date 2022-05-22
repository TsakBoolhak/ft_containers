#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	back_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Back", "Single element", &singleElem );
	loadTest(testList, "Back", "Several elements", &severalElem );
	loadTest(testList, "Back", "Several elements", &back_ConstAndNonConst );
	launchTests(testList);
}

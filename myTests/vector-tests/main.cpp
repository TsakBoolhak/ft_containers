#include "vectorTests.hpp"
#include "loadTest.hpp"
#include <iostream>

int	main()
{
	std::cout << COLOR_RED << "Testing namespace " << COLOR_GREEN << VERSION << COLOR_DEFAULT << std::endl;
	constructor_launcher();
	assign_launcher();
	at_launcher();
	back_launcher();
	begin_launcher();
	capacity_launcher();
	return 0;
}

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
	clear_launcher();
	empty_launcher();
	end_launcher();
	erase_launcher();
	front_launcher();
	getAllocator_launcher();
	return 0;
}

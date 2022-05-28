#include "vectorTests.hpp"
#include <iostream>
#include <algorithm>

int	swapOverload_basic() {

	NAMESPACE::vector< int > foo (3, 100);
	NAMESPACE::vector< int > bar (5, 200);

	std::swap(foo, bar);

	std::cout << "foo contains:";
	for (unsigned int i=0; i<foo.size(); i++)
		std::cout << ' ' << foo[i];
	std::cout << std::endl;

	std::cout << "bar contains:";
	for (unsigned int i=0; i<bar.size(); i++)
		std::cout << ' ' << bar[i];
	std::cout << std::endl;

	return 0;
}

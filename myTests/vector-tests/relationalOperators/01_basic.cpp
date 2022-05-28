#include "vectorTests.hpp"
#include <iostream>

int	relationalOperator_basic() {

	NAMESPACE::vector< int > foo (3, 100);
	NAMESPACE::vector< int > bar (5, 200);

	if (foo==bar) std::cout << "foo and bar are equal" << std::endl;
	if (foo!=bar) std::cout << "foo and bar are not equal" << std::endl;
	if (foo< bar) std::cout << "foo is less than bar" << std::endl;
	if (foo> bar) std::cout << "foo is greater than bar" << std::endl;
	if (foo<=bar) std::cout << "foo is less than or equal to bar" << std::endl;
	if (foo>=bar) std::cout << "foo is greater than or equal to bar" << std::endl;

	return 0;
}

#include "stackTests.hpp"
#include <iostream>
#include <vector>

int	relationalOperators_basic() {

	std::vector< int > fooVec (3, 100);
	std::vector< int > barVec (5, 200);

	NAMESPACE::stack<int, std::vector<int> > foo (fooVec);
	NAMESPACE::stack<int, std::vector<int> > bar (barVec);

	if (foo==bar) std::cout << "foo and bar are equal" << std::endl;
	if (foo!=bar) std::cout << "foo and bar are not equal" << std::endl;
	if (foo< bar) std::cout << "foo is less than bar" << std::endl;
	if (foo> bar) std::cout << "foo is greater than bar" << std::endl;
	if (foo<=bar) std::cout << "foo is less than or equal to bar" << std::endl;
	if (foo>=bar) std::cout << "foo is greater than or equal to bar" << std::endl;

	return 0;
}

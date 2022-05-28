#include "stackTests.hpp"
#include <iostream>

int	empty_basic() {

	NAMESPACE::stack<int> myStack;
	int	sum (0);

	for (int i=1;i<=10;i++) myStack.push(i);

	while (!myStack.empty()) {
		sum += myStack.top();
		myStack.pop();
	}

	std::cout << "total: " << sum << std::endl;

	return 0;
}

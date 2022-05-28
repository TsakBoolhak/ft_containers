#include "stackTests.hpp"
#include <iostream>

int	top_basic() {

	NAMESPACE::stack<int> myStack;

	myStack.push(10);
	myStack.push(20);

	myStack.top() -= 5;

	std::cout << "myStack.top() is now " << myStack.top() << std::endl;

	return 0;
}

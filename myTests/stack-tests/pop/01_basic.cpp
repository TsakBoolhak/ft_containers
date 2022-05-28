#include "stackTests.hpp"
#include <iostream>

int	pop_basic() {

	NAMESPACE::stack<int> myStack;

	for (int i=0;i<5;++i) myStack.push(i);

	std::cout << "Popping out elements...";
	while (!myStack.empty()) {
		std::cout << ' ' << myStack.top();
		myStack.pop();
	}

	std::cout << std::endl;

	return 0;
}

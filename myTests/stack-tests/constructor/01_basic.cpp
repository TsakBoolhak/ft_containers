#include "stackTests.hpp"
#include <iostream>
#include <vector>
#ifndef STD
# include "vector.hpp"
  typedef ft::vector<int> defaultContainer;
#else
# include <deque>
  typedef std::deque<int> defaultContainer;

#endif

int	constructor_basic() {

	defaultContainer myDefault (3, 100);
	std::vector<int> myVector (2, 200);

	NAMESPACE::stack<int> first;
	NAMESPACE::stack<int> second (myDefault);

	NAMESPACE::stack<int, std::vector<int> > third;
	NAMESPACE::stack<int, std::vector<int> > fourth (myVector);

	std::cout << "size of first: " << first.size() << std::endl;
	std::cout << "size of second: " << second.size() << std::endl;
	std::cout << "size of third: " << third.size() << std::endl;
	std::cout << "size of fourth: " << fourth.size() << std::endl;

	return 0;
}

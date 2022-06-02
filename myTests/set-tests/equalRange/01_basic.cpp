#include "setTests.hpp"
#include <iostream>

int	equalRange_basic() {

	NAMESPACE::set<int> mySet;

	for ( int i = 1; i <= 5; i++ ) { mySet.insert( i*10 ); }

	NAMESPACE::pair< NAMESPACE::set<int>::iterator, NAMESPACE::set<int>::iterator >	ret;
	ret = mySet.equal_range(30);

	std::cout << "lower_bound points to: " << *(ret.first) << std::endl;
	std::cout << "upper_bound points to: " << *(ret.second) << std::endl;

	return 0;
}

#include "mapTests.hpp"
#include <iostream>

int	equalRange_basic() {

	NAMESPACE::map<char, int> myMap;

	myMap['a']=10;
	myMap['b']=20;
	myMap['c']=30;

	NAMESPACE::pair< NAMESPACE::map<char, int>::iterator, NAMESPACE::map<char, int>::iterator >	ret;
	ret = myMap.equal_range('b');

	std::cout << "lower_bound points to ";
	std::cout << ret.first->first << "=> " << ret.first->second << std::endl;

	std::cout << "upper_bound points to ";
	std::cout << ret.second->first << "=> " << ret.second->second << std::endl;

	return 0;
}

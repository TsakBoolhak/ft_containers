#include "mapTests.hpp"
#include <iostream>

int	upperBound_basic() {

	NAMESPACE::map<char, int> myMap;
	NAMESPACE::map<char, int>::iterator itlow, itup;

	myMap['a']=20;
	myMap['b']=40;
	myMap['c']=60;
	myMap['d']=80;
	myMap['e']=100;

	itlow = myMap.lower_bound ( 'b' );
	itup = myMap.upper_bound ( 'd' );

	myMap.erase(itlow, itup);

	for ( NAMESPACE::map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;

	return 0;
}

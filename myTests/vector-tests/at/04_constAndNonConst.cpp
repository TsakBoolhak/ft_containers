#include "vectorTests.hpp"
#include <iostream>

int	at_ConstAndNonConst() {

	NAMESPACE::vector< int > myVec(10);
	const NAMESPACE::vector< int > myConstVec(10);
	const int constI = myConstVec.at(0);
	int i = myVec.at(0);
	std::cout << constI << " " << i << std::endl;

	return 0;
}

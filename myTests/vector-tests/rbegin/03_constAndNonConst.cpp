#include "vectorTests.hpp"
#include <iostream>

int	rbegin_constAndNonConst() {

	NAMESPACE::vector< int > myVec(10, 42);
	const NAMESPACE::vector< int > myConstVec(10, 42);
	NAMESPACE::vector< int >::reverse_iterator it = myVec.rbegin();
	NAMESPACE::vector< int >::const_reverse_iterator constIt = myConstVec.rbegin();

	std::cout << *constIt << " " << *it << std::endl;

	return 0;
}

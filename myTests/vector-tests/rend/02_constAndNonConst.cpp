#include "vectorTests.hpp"
#include <iostream>

int	rend_constAndNonConst() {

	NAMESPACE::vector< int > myVec(10, 42);
	const NAMESPACE::vector< int > myConstVec(10, 42);
	NAMESPACE::vector< int >::reverse_iterator it = myVec.rend();
	NAMESPACE::vector< int >::const_reverse_iterator constIt = myConstVec.rend();

	std::cout << *constIt << " " << *it << std::endl;

	return 0;
}

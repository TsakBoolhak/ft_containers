#include "vectorTests.hpp"
#include <iostream>

int	end_constAndNonConst() {

	NAMESPACE::vector< int > myVec(10, 42);
	const NAMESPACE::vector< int > myConstVec(10, 42);
	NAMESPACE::vector< int >::iterator it = myVec.end() - 1;
	NAMESPACE::vector< int >::const_iterator constIt = myConstVec.end() - 1;

	std::cout << *constIt << " " << *it << std::endl;

	return 0;
}

#include "vectorTests.hpp"
#include <iostream>

int	begin_ConstAndNonConst() {

	NAMESPACE::vector< int > myVec(10, 42);
	const NAMESPACE::vector< int > myConstVec(10, 42);
	NAMESPACE::vector< int >::iterator it = myVec.begin();
	NAMESPACE::vector< int >::const_iterator constIt = myConstVec.begin();

	std::cout << *constIt << " " << *it << std::endl;

	return 0;
}

#include "vectorTests.hpp"
#include <iostream>

int	back_ConstAndNonConst() {

	NAMESPACE::vector< int > myVec( 10, 42 );
	const NAMESPACE::vector< int > myConstVec( 10, 42 );
	const int constI = myConstVec.back();
	int i = myVec.back();
	std::cout << constI << " " << i << std::endl;

	return 0;
}

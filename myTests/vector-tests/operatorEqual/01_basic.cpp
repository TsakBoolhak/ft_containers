#include "vectorTests.hpp"
#include <iostream>

int	operatorEqual_basic() {

	NAMESPACE::vector<int> foo (3,0);
	NAMESPACE::vector<int> bar (5,0);

	bar = foo;
	foo = NAMESPACE::vector<int>(42, 42);

	std::cout << "Size of foo: " << int(foo.size()) << '\n';
	for ( NAMESPACE::vector< int >::iterator it = foo.begin() ; it != foo.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != foo.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << "Size of bar: " << int(bar.size()) << '\n';
	for ( NAMESPACE::vector< int >::iterator it = bar.begin() ; it != bar.end() ; ++it ) {

		std::cout << *it;
		if ( it + 1 != bar.end() )
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}

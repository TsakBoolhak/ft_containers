#include "mapTests.hpp"
#include <iostream>

int	insert_basic() {

	NAMESPACE::map< char, int > myMap;

	myMap.insert( NAMESPACE::pair< char, int >('a', 100) );
	myMap.insert( NAMESPACE::pair< char, int >('z', 200) );

	NAMESPACE::pair< NAMESPACE::map< char, int >::iterator, bool> ret;
	ret = myMap.insert( NAMESPACE::pair< char, int >('z', 500) );
	if ( ret.second == false ) {
		std::cout << "element 'z' already existed";
		std::cout << " with a value of " << ret.first->second << std::endl;
	}

	NAMESPACE::map< char, int >::iterator it = myMap.begin();
	myMap.insert( it, NAMESPACE::pair< char, int>( 'b', 300 ) );
	myMap.insert( it, NAMESPACE::pair< char, int>( 'c', 400 ) );

	NAMESPACE::map< char, int > anotherMap;
	anotherMap.insert( myMap.begin(), myMap.find('c') );

	std::cout << "myMap contains:" << std::endl;
	for ( it = myMap.begin(); it != myMap.end(); ++it )
		std::cout << it->first << " => " << it->second << std::endl;

	std::cout << "anotherMap contains:" << std::endl;
	for ( it = anotherMap.begin(); it != anotherMap.end(); ++it )
		std::cout << it->first << " => " << it->second << std::endl;


	return 0;
}

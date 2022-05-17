#include <iostream>
#include "map.hpp"
#include <utility>
#include <string>
#include <map>
#include "pair.hpp"

int main() {

	std::map< int, std::string > real;

	real.insert( std::pair< int, std::string > ( 42, "lol" ) );
	std::map<int, std::string>::iterator it = real.find(42);
	if ( it != real.end() )
		std::cout << "key: " << it->first << " value : " << it->second << std::endl;

	ft::map< int, std::string > mine;

	mine.insert( ft::make_pair< int, std::string > ( 42, "lol" ) );
	ft::map<int, std::string>::iterator ite = mine.find(42);
	if ( ite != mine.end() )
		std::cout << "key: " << ite->first << " value : " << ite->second << std::endl;
	return 0;

}

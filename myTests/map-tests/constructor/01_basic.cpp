#include "mapTests.hpp"
#include <iostream>
#include <vector>

bool fncomp (const char lhs, const char rhs) {return lhs<rhs;}

struct classcomp {

	bool	operator() (const char & lhs, const char & rhs) const {return lhs<rhs;}
};

template <typename T, typename U, typename Comp>
void	printMap( NAMESPACE::map<T, U, Comp> const & toPrint, std::string const & name ) {

	std::cout << name << ":" << std::endl;
	for ( typename NAMESPACE::map<T, U>::const_iterator it = toPrint.begin() ; it != toPrint.end() ; it ++ ) {
		std::cout << "\tfirst: "<< it->first << " second: " << it->second << std::endl;
	}
	std::cout << std::endl;
}

int	constructor_basic() {

	NAMESPACE::map<char, int> first;

	first['a']=10;
	first['b']=30;
	first['c']=50;
	first['d']=70;
	printMap(first, "First map");

	NAMESPACE::map<char, int> second(first.begin(), first.end());
	printMap(second, "Second map");

	NAMESPACE::map<char, int> third (second);
	printMap(third, "Third map");

	NAMESPACE::map<char, int, classcomp> fourth;

	bool(*fn_pt)(char,char) = fncomp;
	NAMESPACE::map<char, int, bool(*)(char,char)> fifth (fn_pt);


	fourth.insert( first.begin(), first.end() );
	printMap<char, int, classcomp>(fourth, "Fourth map");

	for ( char c = 0 ; c <= 10 ; c++)
		fifth['a' + c]=c*10;
	printMap< char, int, bool(*)(char, char) >(fifth, "Fifth map");

	return 0;
}

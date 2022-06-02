#include "setTests.hpp"
#include <iostream>
#include <vector>

bool fncomp (int lhs, int rhs) {return lhs<rhs;}

struct classcomp {

	bool	operator() (const int & lhs, const int & rhs) const {return lhs<rhs;}
};

template <typename T, typename Comp>
void	printSet( NAMESPACE::set<T, Comp> const & toPrint, std::string const & name ) {

	std::cout << name << ":" << std::endl;
	for ( typename NAMESPACE::set<T, Comp>::const_iterator it = toPrint.begin() ; it != toPrint.end() ; it ++ ) {
		std::cout << "\t" << *it << std::endl;
	}
	std::cout << std::endl;
}

int	constructor_basic() {

	NAMESPACE::set<int> first;
	printSet(first, "First set");

	int myInts[] = {10, 20, 30, 40, 50};

	NAMESPACE::set<int> second(myInts, myInts+5);
	printSet(second, "Second set");

	NAMESPACE::set<int> third (second);
	printSet(third, "Third set");

	NAMESPACE::set<int> fourth(second.begin(), second.end());
	printSet(third, "Fourth set");

	NAMESPACE::set<int, classcomp> fifth;
	fifth.insert( third.begin(), third.end() );
	printSet(fourth, "Fifth set");

	bool(*fn_pt)(int,int) = fncomp;
	NAMESPACE::set<int, bool(*)(int,int)> sixth (fn_pt);
	for ( char c = 0 ; c <= 10 ; c++)
		sixth.insert(2*(c%2 != 0) + 3*(c%3 != 0));
	printSet<int, bool (*)(int,int)>(sixth, "Sixth set");

	return 0;
}

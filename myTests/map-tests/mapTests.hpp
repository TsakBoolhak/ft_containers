#ifndef MAP_TESTS_HPP
# define MAP_TESTS_HPP

# ifdef STD
#  define NAMESPACE std
#  define VERSION "std"
#  include <map>
#  include <utility>
# else
#  define NAMESPACE ft
#  define VERSION "ft"
#  include "map.hpp"
#  include "pair.hpp"
# endif

void	constructor_launcher();
int		constructor_basic();

void	begin_launcher();
int		begin_basic();

void	clear_launcher();
int		clear_basic();

void	count_launcher();
int		count_basic();

void	empty_launcher();
int		empty_basic();

void	end_launcher();
int		end_basic();

void	equalRange_launcher();
int		equalRange_basic();

void	erase_launcher();
int		erase_basic();

void	find_launcher();
int		find_basic();

void	getAllocator_launcher();
int		getAllocator_basic();

void	insert_launcher();
int		insert_basic();

void	keyComp_launcher();
int		keyComp_basic();

void	lowerBound_launcher();
int		lowerBound_basic();

void	maxSize_launcher();
int		maxSize_basic();

void	operatorEqual_launcher();
int		operatorEqual_basic();

void	operatorBracket_launcher();
int		operatorBracket_basic();

void	rbegin_launcher();
int		rbegin_basic();

void	rend_launcher();
int		rend_basic();

void	size_launcher();
int		size_basic();

void	swap_launcher();
int		swap_basic();

void	upperBound_launcher();
int		upperBound_basic();

void	valueComp_launcher();
int		valueComp_basic();

void	relationalOperators_launcher();
int		relationalOperators_basic();

void	swapOverload_launcher();
int		swapOverload_basic();

#endif

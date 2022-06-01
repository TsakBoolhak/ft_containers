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

#endif

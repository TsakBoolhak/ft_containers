#ifndef STACK_TESTS_HPP
# define STACK_TESTS_HPP

# ifdef STD
#  define NAMESPACE std
#  define VERSION "std"
#  include <stack>
# else
#  define NAMESPACE ft
#  define VERSION "ft"
#  include "stack.hpp"
# endif

void	constructor_launcher();
int		constructor_basic();

#endif

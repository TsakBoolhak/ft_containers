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

void	empty_launcher();
int		empty_basic();

void	pop_launcher();
int		pop_basic();

void	push_launcher();
int		push_basic();

void	size_launcher();
int		size_basic();

void	top_launcher();
int		top_basic();

void	relationalOperators_launcher();
int		relationalOperators_basic();

#endif

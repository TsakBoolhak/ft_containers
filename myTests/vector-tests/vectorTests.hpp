#ifndef VECTOR_TESTS_HPP
# define VECTOR_TESTS_HPP

# ifdef STD
#  define NAMESPACE std
#  include <vector>
# else
#  define NAMESPACE ft
#  include "vector.hpp"
# endif

void	constructor_launcher();
int		defaultIntCtor();

#endif

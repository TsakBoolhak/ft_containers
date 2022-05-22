#ifndef VECTOR_TESTS_HPP
# define VECTOR_TESTS_HPP

# ifdef STD
#  define NAMESPACE std
#  define VERSION "std"
#  include <vector>
# else
#  define NAMESPACE ft
#  define VERSION "ft"
#  include "vector.hpp"
# endif

void	constructor_launcher();
int		defaultIntCtor();
int		defaultStringCtor();
int		defaultIntricatedVectorCtor();
int		fillIntCtor();
int		rangeIntCtor();
int		copyIntCtor();

#endif

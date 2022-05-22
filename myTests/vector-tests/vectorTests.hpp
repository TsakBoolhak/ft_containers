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

void	assign_launcher();
int		fillAssign();
int		rangeAssign();

void	at_launcher();
int		at_validIndex();
int		at_outOfBoundIndex();
int		at_indexOnEmptyVec();
int		at_ConstAndNonConst();

void	back_launcher();
int		singleElem();
int		severalElem();
int		back_ConstAndNonConst();

void	begin_launcher();
int		begin_basic();
int		begin_equalEnd();
int		begin_ConstAndNonConst();

#endif

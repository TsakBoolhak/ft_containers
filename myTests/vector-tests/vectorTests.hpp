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
int		back_singleElem();
int		back_severalElem();
int		back_ConstAndNonConst();

void	begin_launcher();
int		begin_basic();
int		begin_equalEnd();
int		begin_ConstAndNonConst();

void	capacity_launcher();
int		capacity_empty();
int		capacity_singleElem();
int		capacity_twoElem();
int		capacity_threeElem();
int		capacity_fiveElem();
int		capacity_copyCtor();
int		capacity_assignFill();
int		capacity_assignRange();
int		capacity_assignOperatorNotEnoughSpace();
int		capacity_assignOperatorEnoughSpace();
int		capacity_resizeLarger();
int		capacity_resizeShorter();

void	clear_launcher();
int		clear_basic();
int		clear_empty();
int		clear_vecOfVec();
int		clear_doubleClear();
int		clear_pushBackAfterClear();

void	empty_launcher();
int		empty_emptyVec();
int		empty_filledVec();
int		empty_clearedVec();
int		empty_clearedAndRefilledVec();

void	end_launcher();
int		end_basic();
int		end_constAndNonConst();

void	erase_launcher();
int		erase_singleElem();
int		erase_range();

void	front_launcher();
int		front_basic();
int		front_vecOfVec();

void	getAllocator_launcher();
int		getAllocator_basic();
#endif

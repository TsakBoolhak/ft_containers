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

void	insert_launcher();
int		insert_singleElem();
int		insert_fill();
int		insert_range();
int		insert_mix();

void	maxSize_launcher();
int		maxSize_intVec();
int		maxSize_charVec();
int		maxSize_stringVec();

void	operatorEqual_launcher();
int		operatorEqual_basic();

void	operatorBracket_launcher();
int		operatorBracket_basic();
int		operatorBracket_outOfBoundIndex();

void	popBack_launcher();
int		popBack_basic();
int		popBack_otherTests();

void	pushBack_launcher();
int		pushBack_basic();

void	rbegin_launcher();
int		rbegin_basic();
int		rbegin_equalRend();
int		rbegin_constAndNonConst();

void	rend_launcher();
int		rend_basic();
int		rend_constAndNonConst();

void	reserve_launcher();
int		reserve_basic();
int		reserve_lengthError();
int		reserve_badAlloc();

void	resize_launcher();
int		resize_basic();

void	size_launcher();
int		size_basic();

void	swap_launcher();
int		swap_basic();

void	relationalOperator_launcher();
int		relationalOperator_basic();

void	swapOverload_launcher();
int		swapOverload_basic();

#endif

SRCS		=	main.cpp \
				constructors/00_launcher.cpp \
				constructors/01_defaultIntCtor.cpp \
				constructors/02_defaultStringCtor.cpp \
				constructors/03_defaultIntricatedVectorCtor.cpp \
				constructors/04_fillIntCtor.cpp \
				constructors/05_rangeIntCtor.cpp \
				constructors/06_copyIntCtor.cpp \
				assign/00_launcher.cpp \
				assign/01_fillAssign.cpp \
				assign/02_rangeAssign.cpp \
				at/00_launcher.cpp \
				at/01_validIndex.cpp \
				at/02_outOfBoundIndex.cpp \
				at/03_indexOnEmptyVec.cpp \
				at/04_constAndNonConst.cpp \
				back/00_launcher.cpp \
				back/01_singleElem.cpp \
				back/02_severalElem.cpp \
				back/03_constAndNonConst.cpp \
				begin/00_launcher.cpp \
				begin/01_basic.cpp \
				begin/02_beginEqualEnd.cpp \
				begin/03_constAndNonConst.cpp \
				capacity/00_launcher.cpp \
				capacity/01_empty.cpp \
				capacity/02_singleElem.cpp \
				capacity/03_twoElem.cpp \
				capacity/04_threeElem.cpp \
				capacity/05_fiveElem.cpp \
				capacity/06_copyCtor.cpp \
				capacity/07_assignFill.cpp \
				capacity/08_assignRange.cpp \
				capacity/09_assignOperatorNotEnoughSpace.cpp \
				capacity/10_assignOperatorEnoughSpace.cpp \
				capacity/11_resizeLarger.cpp \
				capacity/12_resizeShorter.cpp \
				clear/00_launcher.cpp \
				clear/01_basic.cpp \
				clear/02_empty.cpp \
				clear/03_vecOfVec.cpp \
				clear/04_doubleClear.cpp \
				clear/05_pushBackAfterClear.cpp \
				empty/00_launcher.cpp \
				empty/01_emptyVec.cpp \
				empty/02_filledVec.cpp \
				empty/03_clearedVec.cpp \
				empty/04_clearedAndRefilledVec.cpp \
				end/00_launcher.cpp \
				end/01_basic.cpp \
				end/02_constAndNonConst.cpp \
				erase/00_launcher.cpp \
				erase/01_singleElem.cpp \
				erase/02_range.cpp \
				front/00_launcher.cpp \
				front/01_basic.cpp \
				front/02_vecOfVec.cpp \
				getAllocator/00_launcher.cpp \
				getAllocator/01_basic.cpp \
				insert/00_launcher.cpp \
				insert/01_singleElem.cpp \
				insert/02_fill.cpp \
				insert/03_range.cpp \
				insert/04_mix.cpp \
				maxSize/00_launcher.cpp \
				maxSize/01_intVec.cpp \
				maxSize/02_charVec.cpp \
				maxSize/03_stringVec.cpp \
				operatorEqual/00_launcher.cpp \
				operatorEqual/01_basic.cpp \
				operatorBracket/00_launcher.cpp \
				operatorBracket/01_basic.cpp \
				operatorBracket/02_outOfBoundIndex.cpp \
				popBack/00_launcher.cpp \
				popBack/01_basic.cpp \
				popBack/02_otherTests.cpp \
				pushBack/00_launcher.cpp \
				pushBack/01_basic.cpp \
				rbegin/00_launcher.cpp \
				rbegin/01_basic.cpp \
				rbegin/02_equalRend.cpp \
				rbegin/03_constAndNonConst.cpp \
				rend/00_launcher.cpp \
				rend/01_basic.cpp \
				rend/02_constAndNonConst.cpp \
				reserve/00_launcher.cpp \
				reserve/01_basic.cpp \
				reserve/02_lengthError.cpp \
				reserve/03_badAlloc.cpp \
				resize/00_launcher.cpp \
				resize/01_basic.cpp \
				size/00_launcher.cpp \
				size/01_basic.cpp \
				swap/00_launcher.cpp \
				swap/01_basic.cpp \
				relationalOperators/00_launcher.cpp \
				relationalOperators/01_basic.cpp \
				swapOverload/00_launcher.cpp \
				swapOverload/01_basic.cpp \
				loadTest.cpp

OBJFOLD		= obj/

OBJS		= ${SRCS:%.cpp=${OBJFOLD}%.o}

DEP			= ${OBJS:%.o=.d}

NAME		= vector_test

CC			= c++


CFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../..

RM			= rm -rf

${OBJFOLD}%.o: %.cpp 
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:		 ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

test:
	mkdir -p ../bin
	$(MAKE) re
	cp ${NAME} ../bin/${NAME}_mine
	$(MAKE) clean
	$(MAKE) all CFLAGS="-MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../.. -D STD"
	cp ${NAME} ../bin/${NAME}_real
	rm ${NAME}
	../bin/${NAME}_real
	../bin/${NAME}_mine
	mkdir -p ../logs
	../bin/${NAME}_real > ../logs/vector.realOutput
	../bin/${NAME}_mine > ../logs/vector.myOutput
	-diff --ignore-matching-lines="Testing namespace" ../logs/vector.realOutput ../logs/vector.myOutput > ../logs/vector.diff

all:
	$(MAKE) -j $(NAME)

clean:
	${RM} ${OBJFOLD}

fclean:			clean
	${RM} ${NAME} ../bin/${NAME}_mine ../bin/${NAME}_real ../logs/vector.diff ../logs/vector.realOutput ../logs/vector.myOutput

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

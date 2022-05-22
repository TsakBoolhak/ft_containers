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
				../loadTest.cpp

OBJS		= ${SRCS:.cpp=.o}

DEP			= ${OBJS:.o=.d}

NAME		= vector_test

CC			= c++


CFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../..

RM			= rm -f

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:		 ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
#	${CC} ${CFLAGS} ${OBJS} -o ${NAME}_real
#	make test

test:
	$(MAKE) re
	cp ${NAME} ${NAME}_mine
	$(MAKE) clean
	$(MAKE) all CFLAGS="-MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../.. -D STD"
	cp ${NAME} ${NAME}_real
	./${NAME}_real
	./${NAME}_mine
	./${NAME}_real > realOutput
	./${NAME}_mine > myOutput
	-diff --ignore-matching-lines="Testing namespace" ./realOutput ./myOutput > log

all:
	$(MAKE) -j $(NAME)

clean:
	${RM} ${OBJS} ${DEP}

fclean:			clean
	${RM} ${NAME} ${NAME}_mine ${NAME}_real log realOutput myOutput

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

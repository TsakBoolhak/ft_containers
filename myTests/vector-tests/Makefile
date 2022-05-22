SRCS		=	main.cpp \
				constructors/00_launcher.cpp \
				constructors/01_defaultIntCtor.cpp \
				constructors/02_defaultStringCtor.cpp \
				constructors/03_defaultIntricatedVectorCtor.cpp \
				constructors/04_fillIntCtor.cpp \
				constructors/05_rangeIntCtor.cpp \
				constructors/06_copyIntCtor.cpp \
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
	diff --ignore-matching-lines="Testing namespace" ./realOutput ./myOutput > log

all:
	$(MAKE) -j $(NAME)

clean:
	${RM} ${OBJS} ${DEP}

fclean:			clean
	${RM} ${NAME} ${NAME}_mine ${NAME}_real log realOutput myOutput

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

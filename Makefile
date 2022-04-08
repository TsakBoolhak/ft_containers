SRCS		=	vector_test.cpp

OBJS		= ${SRCS:.cpp=.o}

DEP			= ${OBJS:.o=.d}

NAME		= vector_test

CC			= c++


#ifndef CFLAGS
CFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98 -g3 -I.

RM			= rm -f

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:		 ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
#	${CC} ${CFLAGS} ${OBJS} -o ${NAME}_real
#	make test

test:
	$(MAKE) all
	cp ${NAME} ${NAME}_mine
	$(MAKE) clean
	$(MAKE) all CFLAGS="-MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -D REAL_STD"
	cp ${NAME} ${NAME}_real
	$(MAKE) clean
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

SRCS		=	vector_test.cpp

OBJS		= ${SRCS:.cpp=.o}

DEP			= ${OBJS:.o=.d}

NAME		= vector_test

CC			= c++

CFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98 -g3 -I.

RM			= rm -f

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:		 ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	${CC} ${CFLAGS} -D REAL_STD ${OBJS} -o ${NAME}_real
	./${NAME}
	./${NAME}_real
	diff ./${NAME} ./${NAME}_real > log

all:			${NAME}

clean:
	${RM} ${OBJS} ${DEP}

fclean:			clean
	${RM} ${NAME} ${NAME}_real log

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

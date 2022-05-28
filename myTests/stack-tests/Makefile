SRCS		=	main.cpp \
				constructor/00_launcher.cpp \
				constructor/01_basic.cpp \
				empty/00_launcher.cpp \
				empty/01_basic.cpp \
				pop/00_launcher.cpp \
				pop/01_basic.cpp \
				push/00_launcher.cpp \
				push/01_basic.cpp \
				size/00_launcher.cpp \
				size/01_basic.cpp \
				top/00_launcher.cpp \
				top/01_basic.cpp \
				relationalOperators/00_launcher.cpp \
				relationalOperators/01_basic.cpp \
				../loadTest.cpp

OBJS		= ${SRCS:.cpp=.o}

DEP			= ${OBJS:.o=.d}

NAME		= stack_test

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
	-diff --ignore-matching-lines="Testing namespace" ./realOutput ./myOutput > stack.log

all:
	$(MAKE) -j $(NAME)

clean:
	${RM} ${OBJS} ${DEP}

fclean:			clean
	${RM} ${NAME} ${NAME}_mine ${NAME}_real stack.log realOutput myOutput

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

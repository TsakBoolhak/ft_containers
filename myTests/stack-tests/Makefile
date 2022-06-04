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
				loadTest.cpp

OBJFOLD		= obj/

OBJS		= ${SRCS:%.cpp=${OBJFOLD}%.o}

DEP			= ${OBJS:.o=.d}

NAME		= stack_test

CC			= c++


CFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../..

RM			= rm -rf

${OBJFOLD}%.o: %.cpp 
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:		 ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

test:
	mkdir -p ../bin/
	$(MAKE) re
	cp ${NAME} ../bin/${NAME}_mine
	$(MAKE) clean
	$(MAKE) all CFLAGS="-MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../.. -D STD"
	cp ${NAME} ../bin/${NAME}_real
	rm ${NAME}
	../bin/${NAME}_real
	../bin/${NAME}_mine
	mkdir -p ../logs
	../bin/${NAME}_real > ../logs/stack.realOutput
	../bin/${NAME}_mine > ../logs/stack.myOutput
	-diff --ignore-matching-lines="Testing namespace" ../logs/stack.realOutput ../logs/stack.myOutput > ../logs/stack.diff
	

all:
	$(MAKE) -j $(NAME)

clean:
	${RM} ${OBJFOLD}

fclean:			clean
	${RM} ${NAME} ../bin/${NAME}_mine ../bin/${NAME}_real ../logs/stack.diff ../logs/stack.realOutput ../logs/stack.myOutput

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

SRCS		=	main.cpp \
				constructor/00_launcher.cpp \
				constructor/01_basic.cpp \
				begin/00_launcher.cpp \
				begin/01_basic.cpp \
				clear/00_launcher.cpp \
				clear/01_basic.cpp \
				count/00_launcher.cpp \
				count/01_basic.cpp \
				empty/00_launcher.cpp \
				empty/01_basic.cpp \
				end/00_launcher.cpp \
				end/01_basic.cpp \
				equalRange/00_launcher.cpp \
				equalRange/01_basic.cpp \
				erase/00_launcher.cpp \
				erase/01_basic.cpp \
				find/00_launcher.cpp \
				find/01_basic.cpp \
				getAllocator/00_launcher.cpp \
				getAllocator/01_basic.cpp \
				insert/00_launcher.cpp \
				insert/01_basic.cpp \
				keyComp/00_launcher.cpp \
				keyComp/01_basic.cpp \
				lowerBound/00_launcher.cpp \
				lowerBound/01_basic.cpp \
				maxSize/00_launcher.cpp \
				maxSize/01_basic.cpp \
				operatorEqual/00_launcher.cpp \
				operatorEqual/01_basic.cpp \
				operatorBracket/00_launcher.cpp \
				operatorBracket/01_basic.cpp \
				rbegin/00_launcher.cpp \
				rbegin/01_basic.cpp \
				rend/00_launcher.cpp \
				rend/01_basic.cpp \
				size/00_launcher.cpp \
				size/01_basic.cpp \
				swap/00_launcher.cpp \
				swap/01_basic.cpp \
				upperBound/00_launcher.cpp \
				upperBound/01_basic.cpp \
				valueComp/00_launcher.cpp \
				valueComp/01_basic.cpp \
				relationalOperators/00_launcher.cpp \
				relationalOperators/01_basic.cpp \
				swapOverload/00_launcher.cpp \
				swapOverload/01_basic.cpp \
				loadTest.cpp

OBJFOLD	= obj/

OBJS		= ${SRCS:%.cpp=${OBJFOLD}%.o}

DEP			= ${OBJS:%.o=.d}

NAME		= map_test

CC			= c++


CFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../..

RM			= rm -rf

${OBJFOLD}%.o: %.cpp 
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:		 ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

test:
	@mkdir -p ../bin
	$(MAKE) re
	cp ${NAME} ../bin/${NAME}_mine
	$(MAKE) clean
	$(MAKE) all CFLAGS="-MMD -Wall -Wextra -Werror -std=c++98 -g3 -I. -I.. -I../.. -D STD"
	cp ${NAME} ../bin/${NAME}_real
	rm ${NAME}
	../bin/${NAME}_real
	../bin/${NAME}_mine
	@mkdir -p ../logs
	../bin/${NAME}_real > ../logs/map.realOutput
	../bin/${NAME}_mine > ../logs/map.myOutput
	-diff --ignore-matching-lines="Testing namespace" ../logs/map.realOutput ../logs/map.myOutput > ../logs/map.diff

all:
	$(MAKE) -j $(NAME)

clean:
	${RM} ${OBJFOLD}

fclean:			clean
	${RM} ${NAME} ../bin/${NAME}_mine ../bin/${NAME}_real ../logs/map.diff ../logs/map.realOutput ../logs/map.myOutput

re:				fclean all

-include ${DEP}

.PHONY:			all clean fclean re

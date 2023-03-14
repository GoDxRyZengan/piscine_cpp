NAME = exec

SRCS =	./main.cpp \

CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJS = ${SRCS:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${OBJS} -o ${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
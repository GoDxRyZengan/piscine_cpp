NAME = exec

SRCS =	./main.cpp \
		./Animal.cpp \
		./Dog.cpp \
		./Cat.cpp \
		./Brain.cpp \

CXX = c++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werror 

RM = rm -rf

OBJS = ${SRCS:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
NAME = template
SRC = main.cpp
OBJ := ${SRC:%.cpp=%.o}
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=address
CXX = g++

all : ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re

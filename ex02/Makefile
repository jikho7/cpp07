NAME = array
CXXFLAGS = -Wextra -Wall -Werror -fsanitize=address -std=c++98
SRC = main.cpp Array.cpp
OBJ = ${SRC:%.cpp=%.o}
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
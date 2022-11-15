NAME = brainz

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = ./megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re : fclean
	make all

grind: ${NAME}
		valgrind ./$(NAME)

bin: $(NAME)
	./$(NAME)
	
.PHONY: clean fclean re grind test
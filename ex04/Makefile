# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sam <sam@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 13:06:05 by sam               #+#    #+#              #
#    Updated: 2022/11/22 16:57:58 by sam              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = ./main.cpp

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

bin: re $(NAME)
	./$(NAME) filename "pouet" "coucou"


wpa: re $(NAME)
	./$(NAME)

npa: re $(NAME)
	./$(NAME) coucou ok 

.PHONY: clean fclean re grind bin wpa npa
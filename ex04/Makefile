# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sam <sam@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 13:06:05 by sam               #+#    #+#              #
#    Updated: 2022/11/24 10:55:56 by sam              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = c++
CXXFLAGS = -MMD -Wall -Wextra -Werror -g3 -std=c++98


SRC = ./main.cpp

OBJ = $(SRC:%.cpp=%.o)
DEP =  ${OBJ:%.o=%.d}

all: $(NAME)

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
			
clean:
	rm -rf ${OBJ}
	rm -rf ${DEP}

fclean: clean
	rm -rf ${NAME}
	rm -f *.replace

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

-include ${DEP}

.PHONY: clean fclean re grind bin wpa npa

-include ${DEPS}
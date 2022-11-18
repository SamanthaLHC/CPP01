# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:36:18 by sle-huec          #+#    #+#              #
#    Updated: 2022/11/18 17:39:31 by sle-huec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = c++
CXXFLAGS = -MMD -g3 -Wall -Wextra -Werror -std=c++98


INCLUDE = -I./includes

SRCS_PATH = ./srcs/
OBJ_PATH = ./objs/

SRCS = $(addprefix $(SRCS_PATH), \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		main.cpp)

OBJS	= $(SRCS:$(SRCS_PATH)%.cpp=$(OBJ_PATH)%.o)
DEPS	= $(SRCS:$(SRCS_PATH)%.cpp=$(OBJ_PATH)%.d)

all: $(NAME)

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

$(OBJ_PATH)%.o: $(SRCS_PATH)%.cpp
	mkdir -p $(OBJ_PATH)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	rm -rf ${OBJS} ${DEPS}

fclean: clean
	rm -rf ${NAME}
	rm -rf ${OBJ_PATH}

re: fclean
	
	make all

grind: ${NAME}
		valgrind ./$(NAME)

bin: re $(NAME)
	./$(NAME)

.PHONY: clean fclean re grind bin%        
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 13:34:20 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/25 18:54:41 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ScavTrap.cpp main.cpp  ClapTrap.cpp

OBJ = ${SRC:.cpp=.o}

NAME = ScavTrap

all : ${NAME}

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ ${CPPFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	@echo "\033[32m Linking ...\033[0m"
	@c++ ${CPPFLAGS} $^ -o $@

clean :
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : clean

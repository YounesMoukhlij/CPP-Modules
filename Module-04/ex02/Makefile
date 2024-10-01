# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 13:34:20 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/30 16:08:14 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp  Brain.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Animal

all : ${NAME}

%.o : %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ ${CPPFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	@c++ ${CPPFLAGS} $^ -o $@
	@echo " Linking ...\n"

clean :
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : clean

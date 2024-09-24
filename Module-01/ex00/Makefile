# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 08:50:02 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/23 18:50:24 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ = ${SRC:.cpp=.o}

CPPFCLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

all : ${NAME}

%.o: %.cpp Zombie.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ $(CPPFCLAGS) -c $< -o $@

${NAME} : ${OBJ}
	@echo "\033[32m Linking ...\033[0m"
	@c++ ${CPPFCLAGS} $^ -o $@

clean :
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : clean

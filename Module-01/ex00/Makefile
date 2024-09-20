# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 08:50:02 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/19 12:05:17 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ = ${SRC:.cpp=.o}

CPPFCLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${CPPFCLAGS} $^ -o $@
	@echo "Linking ...\n"

clean :
	@rm ${OBJ}

fclean : clean
	@rm ${NAME}

re : fclean all

.PHONY : clean

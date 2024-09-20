# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 13:34:20 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/19 12:06:08 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPPFCLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = fixed

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${CPPFCLAGS} $^ -o $@
	@echo "Linking ...\n"

clean :
	@rm ${OBJ}

fclean : clean
	@rm -f ${NAME}

re : fclean all

.PHONY : clean

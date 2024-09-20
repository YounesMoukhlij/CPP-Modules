# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 10:51:28 by youmoukh          #+#    #+#              #
#    Updated: 2024/08/11 10:54:51 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

CPPFCLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${OBJ} -o $@

clean :
	rm ${OBJ}

fclean : clean
	rm ${NAME}

.PHONY : clean

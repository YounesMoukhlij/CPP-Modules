# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/02 16:59:01 by youmoukh          #+#    #+#              #
#    Updated: 2024/06/02 16:59:02 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

CPPFCLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${OBJ} -c $@

clean :
	rm ${OBJ}

fclean : clean
	rm ${NAME}

.PHONY : clean

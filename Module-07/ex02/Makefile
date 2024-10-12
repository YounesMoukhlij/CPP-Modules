# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 13:43:06 by youmoukh          #+#    #+#              #
#    Updated: 2024/10/12 14:33:24 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = ${SRC:.cpp=.o}
SRC = main.cpp

NAME = array


all : ${NAME}

%.o: %.cpp Array.hpp
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
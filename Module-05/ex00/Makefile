# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 12:38:07 by youmoukh          #+#    #+#              #
#    Updated: 2024/10/01 12:38:40 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Bureaucrat

all : ${NAME}

%.o : %.cpp Bureaucrat.hpp
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

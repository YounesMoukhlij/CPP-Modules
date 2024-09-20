# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 13:43:06 by youmoukh          #+#    #+#              #
#    Updated: 2024/03/13 13:43:08 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp program.cpp PhoneBook.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror
NAME = PhoneBook

all : ${NAME}

${NAME} : ${OBJ}
	@(c++ ${CPPFLAGS} ${OBJ} -o $@)

clean :
	@rm ${OBJ}

fclean : clean
	@rm ${NAME}

re : fclean all

.PHONY : clean

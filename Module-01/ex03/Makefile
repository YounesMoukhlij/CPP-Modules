# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 12:05:33 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/19 12:05:39 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = weapon

SRCS = main.cpp HumanA.cpp  Weapon.cpp HumanB.cpp 

OBJS = $(SRCS:.cpp=.o)

all : ${NAME}

$(NAME): $(OBJS)
	@c++ $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY : clean
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:18:59 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/19 12:05:58 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all : ${NAME}

$(NAME): $(OBJS)
	@c++ $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean
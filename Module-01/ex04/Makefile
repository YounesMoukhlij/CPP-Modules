# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 12:05:33 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/24 18:58:36 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = sed

SRCS = main.cpp sed.cpp

OBJS = $(SRCS:.cpp=.o)

all : ${NAME}

%.o: %.cpp sed.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "\033[32m Linking ...\033[0m"
	@c++ $(CPPFLAGS) $^ -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : clean
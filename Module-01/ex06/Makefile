# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:18:59 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/24 18:25:21 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harlFilter


all : ${NAME}

%.o: %.cpp Harl.hpp
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
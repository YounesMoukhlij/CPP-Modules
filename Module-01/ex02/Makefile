# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:18:59 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/24 18:30:28 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brain

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all : ${NAME}

%.o: %.cpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "Linking ...\n"
	@c++ $(CPPFLAGS) $^ -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : clean

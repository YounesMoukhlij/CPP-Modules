# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:18:59 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/23 18:28:45 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
CPPFCLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

all : ${NAME}

%.o: %.cpp Zombie.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ $(CPPFCLAGS) -c $< -o $@

${NAME} : ${OBJS}
	@c++ ${CPPFCLAGS} $^ -o $@
	@echo "Linking ...\n"

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : clean

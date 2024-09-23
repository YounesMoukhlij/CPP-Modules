# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:18:59 by youmoukh          #+#    #+#              #
#    Updated: 2024/09/23 13:19:26 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all : ${NAME}

%.o: %.cpp Zombie.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ $(CPPFCLAGS) -c $< -o $@

${NAME} : ${OBJ}
	@c++ ${CPPFCLAGS} $^ -o $@
	@echo "Linking ...\n"

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY : clean

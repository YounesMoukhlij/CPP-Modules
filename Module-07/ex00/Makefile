# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 13:43:06 by youmoukh          #+#    #+#              #
#    Updated: 2024/10/05 16:19:38 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

NAME = template




RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
WHITE = \033[37m

print_younes:
	@echo "$(RED)  Y   Y  OOO  U   U  N   N  EEEEE  SSSS $(RESET)"
	@echo "$(GREEN)  Y Y  O   O U   U  NN  N  E     S     $(RESET)"
	@echo "$(YELLOW)   Y   O   O U   U  N N N  EEEE   SSS  $(RESET)"
	@echo "$(BLUE)   Y   O   O U   U  N  NN  E         S $(RESET)"
	@echo "$(MAGENTA)  Y    OOO   UUU   N   N  EEEEE  SSSS  $(RESET)"



all : ${NAME}

%.o: %.cpp whatever.hpp
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

.PHONY : clean print_younes

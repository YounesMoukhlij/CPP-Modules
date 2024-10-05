# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 13:43:06 by youmoukh          #+#    #+#              #
#    Updated: 2024/10/05 16:21:42 by youmoukh         ###   ########.fr        #
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
	@echo "$(MAGENTA)     ██     ██  ██████   ██    ██  ██     ██  ███████   ███████   ███████   $(RESET)"
	@echo "$(YELLOW)      ██     ██ ██    ██  ██    ██  ██     ██ ██         ██         ██         $(RESET)"
	@echo "$(GREEN)       ██  ██  ██    ██  ██    ██  ██     ██ ██         ██         ██         $(RESET)"
	@echo "$(CYAN)        ████    ██    ██  ██    ██  ██     ██ ██         ██         ██         $(RESET)"
	@echo "$(RED)          ██      ██████    ██████    ██████   ███████   ███████   ███████   $(RESET)"
	@echo "$(BLUE)                                         ##    ##                     $(RESET)"
	@echo "$(WHITE)                                         ##    ##                     $(RESET)"
	@echo "$(MAGENTA)                                        ##    ##                     $(RESET)"
	@echo "$(YELLOW)                                        ##    ##                     $(RESET)"



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

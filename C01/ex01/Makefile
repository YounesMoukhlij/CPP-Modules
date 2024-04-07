

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)



SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ = ${SRC:.cpp=.o}
CPPFCLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${CPPFCLAGS} $^ -o $@
	@echo "Linking ...\n"

clean :
	@rm ${OBJ}

fclean : clean
	@rm ${NAME}

.PHONY : clean

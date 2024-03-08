
SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

CPPFCLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${OBJ} -c $@

clean :
	rm ${OBJ}

fclean : clean
	rm ${NAME}

.PHONY : clean

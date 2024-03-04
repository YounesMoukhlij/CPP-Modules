
SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

CPPFCLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : ${NAME}

${NAME} : ${OBJ}
	@c++ ${OBJ} -o $@

%.o : %.c
	@c++ ${CPPFCLAGS} -c $< -o $@

clean :
	rm ${OBJ}

fclean : clean
	rm ${NAME}

.PHONY : clean

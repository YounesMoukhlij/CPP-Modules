
SRC = Contact.cpp program.cpp PhoneBook.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror
NAME = PhoneBook

all : ${NAME} clean play

play :
	./PhoneBook
${NAME} : ${OBJ}
	@(c++ ${CPPFLAGS} ${OBJ} -o $@)

clean :
	@rm ${OBJ}

fclean : clean
	@rm ${NAME}

re : fclean all

.PHONY : clean

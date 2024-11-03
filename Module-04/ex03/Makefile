


CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp

OBJ = ${SRC:.cpp=.o}

NAME = interfaces

all : ${NAME}

%.o : %.cpp AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Cure.hpp Ice.hpp
	@echo "\033[30m Compiling ...\033[0m"
	@c++ ${CPPFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	@c++ ${CPPFLAGS} $^ -o $@
	@echo " Linking ...\n"

clean :
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : clean

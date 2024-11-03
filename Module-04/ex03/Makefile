NAME = interfaces

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COMPILE = c++

SRCS =  main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp
OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Cure.hpp Ice.hpp
	@${COMPILE} ${FLAGS} -c $< -o $@ && \




all : ${NAME}

${NAME} : ${OBJS}
	@${COMPILE} ${OBJS} -o $@ &&

clean :
	@${RM} ${OBJS} && \
	echo "Deleted object files ${OBJS} ✅" || \
	echo "Failed to delete object files ❌"

fclean : clean
	@${RM} ${NAME} && \
	echo "Deleted executable ${NAME} ✅" || \
	echo "Failed to delete executable ${NAME} ❌"

re : fclean all



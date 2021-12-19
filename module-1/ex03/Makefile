NAME = violence

CC = clang++

CFLAGS = -Wall -Wextra -Werror \
		 -std=c++98 \

SRC = main.cpp \
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp \

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re

NAME = fragtrap

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp \
	  FragTrap.cpp \
	  ScavTrap.cpp \
	  ClapTrap.cpp \

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run: re
	@./$(NAME)
	@rm -rf $(OBJ) $(NAME)
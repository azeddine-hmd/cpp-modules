NAME = abstract

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

LEAKS_FLAGS = $(CFLAGS) -g -fsanitize=leak

SRC = main.cpp \
	  Brain.cpp \
	  Cat.cpp \
	  Dog.cpp \
	  AAnimal.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(NAME).dSYM

re: fclean all

debug:
	@$(CC) $(LEAKS_FLAGS) $(SRC) -o $(NAME)
	@./$(NAME) ; make fclean

run: re
	@./$(NAME) ; make fclean
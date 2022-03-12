NAME = convert

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp \
	  Converter.cpp \
	  ScalarValues.cpp \

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(OBJ)

fclean: clean
	@rm $(NAME) $(NAME).dSYM

re: fclean all

run: re
	@./$(NAME) ; make fclean

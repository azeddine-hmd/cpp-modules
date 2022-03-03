NAME = fixed2

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 \

SRC = main.cpp \
	  Fixed.cpp \
	  utils.cpp \

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run: re
	@./$(NAME)

.PHONY: clean fclean re

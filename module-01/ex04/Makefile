NAME = replace

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 \

LEAKS_FLAGS = $(CFLAGS) -g -fsanitize=leak

SRC = main.cpp \

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

debug:
	@$(CC) $(LEAKS_FLAGS) $(SRC) -o $(NAME)
	@./$(NAME) ; make fclean

run: re
	@./$(NAME) ; make fclean

.PHONY: clean fclean re debug run

NAME = replace

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 \

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

.PHONY: clean fclean re

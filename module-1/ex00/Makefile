NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror \

SRC = megaphone.cpp \

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re

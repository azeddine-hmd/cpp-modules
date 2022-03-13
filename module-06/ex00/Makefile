NAME = convert

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

DEBUG_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = main.cpp \
	  Converter.cpp \
	  ScalarValues.cpp \

OBJ = ${SRC:.cpp=.o}

DEL = rm -f

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@$(DEL) $(OBJ)

fclean: clean
	@$(DEL) $(NAME)

re: fclean all

debug: $(SRC)
	@$(CC) $(DEBUG_FLAGS) $(SRC) -o debug.exe

.PHONY: clean fclean re debug
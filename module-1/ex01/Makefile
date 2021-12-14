NAME = phonebook

CC = clang++

CFLAGS = -Wall -Wextra -Werror \

SRC = main.cpp \
	  Contact.cpp \
	  PhoneBook.cpp \

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

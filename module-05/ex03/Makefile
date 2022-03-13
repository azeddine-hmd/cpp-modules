NAME = intern

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp \
	  PresidentialPardonForm.cpp \
	  RobotomyRequestForm.cpp \
	  ShrubberyCreationForm.cpp \
	  AForm.cpp\
	  Bureaucrat.cpp \
	  Intern.cpp \

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

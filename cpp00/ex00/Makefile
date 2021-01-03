SRC =		megaphone.cpp

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n"
	@echo "\033[0;32mCompiling megaphone..."
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

%.o: %.c
	@printf "\033[0;33mGenerating megaphone objects... %-33.33s\r" $@
	@clang++ ${FLAGS} -c $< -o $@

clean:
	@echo "\nRemoving binaries..."
	@rm -f $(OBJ)
	@echo "\033[0m"

fclean:
	@echo "\nDeleting objects..."
	@rm -f $(OBJ)
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

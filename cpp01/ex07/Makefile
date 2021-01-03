# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 20:49:26 by amoujane          #+#    #+#              #
#    Updated: 2020/12/14 20:50:58 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		main.cpp\
			Rep.cpp

FLAGS = -Wall -Wextra -Werror

NAME = replace

OBJ = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n"
	@echo "\033[0;32mCompiling replace..."
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

%.o: %.c
	@printf "\033[0;33mGenerating replace objects... %-33.33s\r" $@
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
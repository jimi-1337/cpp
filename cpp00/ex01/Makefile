# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 18:57:01 by amoujane          #+#    #+#              #
#    Updated: 2020/12/12 19:00:54 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Phonebook.cpp Contact.cpp
OBJS			= $(SRCS:.cpp=.o)

FLAGS		= -Wall -Wextra -Werror -I.

NAME			= phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

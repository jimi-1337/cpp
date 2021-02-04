# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 18:34:42 by amoujane          #+#    #+#              #
#    Updated: 2021/02/02 18:35:06 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Data.cpp
OBJS			= $(SRCS:.cpp=.o)

Name			= data

all:			$(Name)

$(Name):			$(OBJS)
				clang++ -Wall -Wextra -Werror -o $(Name) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(Name)

re:				fclean $(Name)
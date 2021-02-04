# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 16:40:46 by amoujane          #+#    #+#              #
#    Updated: 2021/02/02 16:50:22 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Sconversion.cpp
OBJS			= $(SRCS:.cpp=.o)

Name			= convert

all:			$(Name)

$(Name):			$(OBJS)
				clang++ -Wall -Wextra -Werror -o $(Name) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(Name)

re:				fclean $(Name)
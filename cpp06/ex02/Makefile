# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 19:10:28 by amoujane          #+#    #+#              #
#    Updated: 2021/02/02 19:11:07 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Colombo.cpp
OBJS			= $(SRCS:.cpp=.o)

Name			= colombo

all:			$(Name)

$(Name):			$(OBJS)
				clang++ -Wall -Wextra -Werror -o $(Name) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(Name)

re:				fclean $(Name)
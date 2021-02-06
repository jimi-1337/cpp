# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 15:39:21 by amoujane          #+#    #+#              #
#    Updated: 2021/02/05 15:09:53 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

Name			= array

Header			= Array.hpp

all:			$(Name)

$(Name):			$(OBJS) $(Header)
				clang++ -Wall -Wextra -Werror -o $(Name) $(OBJS)

%.o: %.cpp
				clang++ -Wall -Wextra -Werror -c $< -o $@

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(Name)

re:				fclean $(Name)
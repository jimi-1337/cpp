# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 17:54:21 by amoujane          #+#    #+#              #
#    Updated: 2021/02/05 15:08:28 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

Name			= whatever

Header			= whatever.hpp

all:			$(Name)

$(Name):			$(OBJS) $(Header)
				clang++ -Wall -Wextra -Werror $(OBJS) -o $(Name)

%.o: %.cpp
				clang++ -Wall -Wextra -Werror -c $< -o $@
clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(Name)

re:				fclean $(Name)
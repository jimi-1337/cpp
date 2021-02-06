# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 15:42:38 by amoujane          #+#    #+#              #
#    Updated: 2021/02/05 15:09:07 by amoujane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

Name			= iter

Header			= iter.hpp

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
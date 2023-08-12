# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 10:36:50 by ayakoubi          #+#    #+#              #
#    Updated: 2023/07/05 11:10:15 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

CC		=	c++
CFLAGS	= -Wall -Wextra -Werror

#%.o : %.cpp
#	$(CC) $(CFALGS) $^ -o

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean all

.PHONY : all clean fclean re

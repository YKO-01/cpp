# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 10:59:48 by ayakoubi          #+#    #+#              #
#    Updated: 2023/07/19 11:26:35 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	contact

############### COMAPILATION ################

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

############### SRCS & OBJS ################

SRC		=	main.cpp phonebook.cpp contact.cpp

OBJ		=	$(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

all		: $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY:	all clean fclean re

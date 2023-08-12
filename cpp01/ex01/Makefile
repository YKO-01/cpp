# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 13:31:00 by ayakoubi          #+#    #+#              #
#    Updated: 2023/08/02 15:08:03 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			:=	main Zombie zombieHorde
OBJ			:=	$(addsuffix .o, $(SRC));
SRC			:=	$(addsuffix .cpp, $(SRC));

%.o	:	%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@
	
$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $^ -o $@
	
all	:	$(NAME)

clean	:
	@rm -rf $(OBJ)

fclean	:	clean
	@rm -rf $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re

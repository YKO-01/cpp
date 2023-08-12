# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 11:31:49 by ayakoubi          #+#    #+#              #
#    Updated: 2023/08/02 13:46:25 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brainz

CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			:= main	Zombie
OBJ			:= $(addsuffix .o, $(SRC))
SRC			:= $(addsuffix .cpp, $(SRC))

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME)	: $(OBJ)
	$(CPP) $(CPPFLAGS) $^ -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
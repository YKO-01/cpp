# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 21:38:34 by ayakoubi          #+#    #+#              #
#    Updated: 2023/08/08 15:35:42 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CPP = c++
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

SRC := main

OBJ	:= $(addsuffix .o, $(SRC))
SRC := $(addsuffix .cpp, $(SRC))

%.o : %.c 
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $^ -o $@

all : $(NAME)

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
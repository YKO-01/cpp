# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 15:35:14 by ayakoubi          #+#    #+#              #
#    Updated: 2023/08/09 10:30:34 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CPP = c++
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

SRC := main Harl

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
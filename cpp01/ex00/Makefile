# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 11:31:49 by ayakoubi          #+#    #+#              #
#    Updated: 2023/09/02 13:22:41 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			:= main	Zombie newZombie randomChump
OBJ			:= $(addsuffix .o, $(SRC))
SRC			:= $(addsuffix .cpp, $(SRC))

RED = \033[1;31m
GREEN = \033[1;32m
SPLASH = \033[5m
BLUE = \033[1;34m
YELLOW = \033[1;33m
RESET = \033[0m

%.o : %.cpp
	@$(CPP) $(CPPFALGS) -c $< -o $@
	@echo "$(YELLOW) compile >>>> $< $(RESET)"

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $^ -o $@
	@echo "$(GREEN) ------ Built success ------ $(RESET)"

all : $(NAME)

clean :
	@echo "$(RED) REMOVED OBJ $(RESET)"
	@rm -rf $(OBJ)

fclean : clean
	@echo "$(RED) REMOVED $(NAME) $(RESET)"
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
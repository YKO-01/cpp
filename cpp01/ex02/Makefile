# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 17:03:39 by ayakoubi          #+#    #+#              #
#    Updated: 2023/08/16 11:42:31 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain

CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)

RED = \033[1;31m
GREEN = \033[1;32m
SPLASH = \033[5m
BLUE = \033[1;34m
YELLOW = \033[1;33m
RESET = \033[0m

%.o : %.cpp
	@echo "$(YELLOW) compile >>>> $< $(RESET)"
	@$(CPP) $(CPPFALGS) -c $< -o $@

$(NAME) : $(OBJ)
	@echo "$(GREEN) ------ Built success ------ $(RESET)"
	@$(CPP) $(CPPFLAGS) $^ -o $@

all : $(NAME)

clean :
	@echo "$(RED) REMOVED OBJ $(RESET)"
	@rm -rf $(OBJ)

fclean : clean
	@echo "$(RED) REMOVED $(NAME) $(RESET)"
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
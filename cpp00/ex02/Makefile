# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 13:17:23 by ayakoubi          #+#    #+#              #
#    Updated: 2023/08/28 13:19:01 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	account

############### COMAPILATION ################

CPP		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

############### SRCS & OBJS ################

SRC		=	tests.cpp Account.cpp

OBJ		=	$(SRC:.cpp=.o)

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
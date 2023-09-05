# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 19:44:37 by ayakoubi          #+#    #+#              #
#    Updated: 2023/09/05 19:52:42 by ayakoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = amateria

CPP = c++
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

OBJDIR = obj

SRC := main AMateria Ice Cure
			
OBJ	:= $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRC)))
SRC := $(addsuffix .cpp, $(SRC))

RED = \033[1;31m
GREEN = \033[1;32m
SPLASH = \033[5m
BLUE = \033[1;34m
YELLOW = \033[1;33m
RESET = \033[0m

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/15 12:09:51 by hsamira           #+#    #+#              #
#    Updated: 2026/02/19 14:04:42 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = FragTrap

CXX = c++

CXXFLAG = -Wall -Werror -Wextra -std=c++98 -MMD -MP

SRC =  ClapTrap.cpp main.cpp \
	   ScavTrap.cpp FragTrap.cpp \
	   DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

DEPS = $(SRC:.cpp=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean: 
	rm -f $(OBJ)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : re all clean fclean
-include $(DEPS)
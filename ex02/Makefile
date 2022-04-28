# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 17:54:40 by bbrassar          #+#    #+#              #
#    Updated: 2022/04/28 20:36:06 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					= a.out

CXX						= c++
CXXFLAGS				+= -Wall
CXXFLAGS				+= -Wextra
CXXFLAGS				+= -Werror
CXXFLAGS				+= -Iinclude
CXXFLAGS				+= -c
CXXFLAGS				+= -MMD -MP
CXXFLAGS				+= -std=c++98

DIR_SRC					= src
DIR_OBJ					= obj

SRC						= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ						= $(SRC:%.cpp=$(DIR_OBJ)/%.o)
DEP						= $(OBJ:.o=.d)

$(NAME):				$(OBJ)
						$(CXX) $^ -o $@

$(DIR_OBJ)/%.o:			$(DIR_SRC)/%.cpp
						@mkdir -p $(@D)
						$(CXX) $(CXXFLAGS) $< -o $@

-include $(DEP)

all:					$(NAME)

clean:
						$(RM) -r $(DIR_OBJ)

fclean:					clean
						$(RM) $(NAME)

re:						fclean all

.PHONY:					all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akokoshk <akokoshk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/16 20:46:24 by akokoshk          #+#    #+#              #
#    Updated: 2018/02/01 22:21:01 by akokoshk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CLANG MAKE

NAME = megaphone
CC = clang++
FLAGS = -Wall -Wextra -Werror
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo "megaphone compiled"

#@ar rc $(NAME) $(OBJECTS_PF) $(OBJECTS_LIB)

clean:
	@rm -f $(OBJECTS)
	@echo "megaphone cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "megaphone fcleaned"

re:	fclean all
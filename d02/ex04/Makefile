# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akokoshk <akokoshk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/20 12:13:27 by akokoshk          #+#    #+#              #
#    Updated: 2018/06/20 15:21:01 by akokoshk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CLANG MAKE

NAME = eval_expr
CC = clang++
FLAGS = -Wall -Wextra -Werror
SOURCES = main.cpp Fixed.class.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo "eval_expr compiled"

#@ar rc $(NAME) $(OBJECTS_PF) $(OBJECTS_LIB)

clean:
	@rm -f $(OBJECTS)
	@echo "eval_expr cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "eval_expr fcleaned"

re:	fclean all
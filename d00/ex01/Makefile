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

NAME = MyAwesomePhoneBook
CC = clang++
FLAGS = -Wall -Wextra -Werror
SOURCES = main.cpp PhoneBook.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo "MyAwesomePhoneBook compiled"

#@ar rc $(NAME) $(OBJECTS_PF) $(OBJECTS_LIB)

clean:
	@rm -f $(OBJECTS)
	@echo "MyAwesomePhoneBook cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "MyAwesomePhoneBook fcleaned"

re:	fclean all
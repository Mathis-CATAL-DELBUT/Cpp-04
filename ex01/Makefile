# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 11:48:18 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/21 22:14:00 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= Animal
SRC             = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ             = $(SRC:.cpp=.o)
CC              = c++
CFLAGS  		= -Wall -Wextra -Werror -std=c++98 -g3
RM              = rm -f

all: $(NAME)


$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
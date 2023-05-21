# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 11:48:18 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/21 14:26:33 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= Animal
SRC             = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp 

OBJ             = $(SRC:.cpp=.o)
CC              = c++
CFLAGS  		= -Wall -Wextra -Werror -std=c++98
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
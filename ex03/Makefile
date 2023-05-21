# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 01:10:17 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/22 01:10:35 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= ex03
SRC             = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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
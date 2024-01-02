# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:10:30 by absalem           #+#    #+#              #
#    Updated: 2024/01/02 17:18:38 by absalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= push_swap

SRC 			= main.c utiles.c split_utiles.c parsing.c stack_utiles.c \
					utiles_2.c operate_a.c operate_b.c extra.c sorting.c \
					sort_al.c\

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft
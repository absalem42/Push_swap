# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:10:30 by absalem           #+#    #+#              #
#    Updated: 2023/12/27 16:04:06 by absalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= push_swap

SRC 			= main.c utiles.c split_utiles.c parsing.c stack_utiles.c utiles_2.c\


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -Ilibft #-g3 -fsanitize=address

all: $(NAME)

$(NAME): libft
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)


clean:
	$(RM)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re libft
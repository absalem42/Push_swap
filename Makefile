# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:10:30 by absalem           #+#    #+#              #
#    Updated: 2023/12/28 15:50:08 by absalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= push_swap

SRC 			= main.c utiles.c split_utiles.c parsing.c stack_utiles.c \
					utiles_2.c operate_a.c operate_b.c extra.c sorting.c\


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
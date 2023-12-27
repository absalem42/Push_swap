# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:10:30 by absalem           #+#    #+#              #
#    Updated: 2023/12/27 12:01:21 by absalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= push_swap

SRC 			= main.c utiles.c split_utiles.c parsing.c stack_utiles.c utiles_2.c\


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -Ilibft #-g3 -fsanitize=address
#LIBS = ./libft/libft.a 

all: $(NAME)

$(NAME): libft
	cc $(CFLAGS) $(SRC)  -o $(NAME)

#libft:
#	cd libft && make

clean:
	$(RM)
#	cd libft && make  

fclean:	clean
	$(RM) $(NAME)
#	cd libft && make fclean

re:	fclean $(NAME)

.PHONY:	all clean fclean re libft
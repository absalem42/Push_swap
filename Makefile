# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:10:30 by absalem           #+#    #+#              #
#    Updated: 2023/12/21 15:11:31 by absalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= push_swap

SRC 			= main.c utiles.c split_utiles.c parsing.c\


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -Ilibft -g3 -fsanitize=address
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
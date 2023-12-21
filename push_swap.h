/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:43 by absalem           #+#    #+#             */
/*   Updated: 2023/12/21 16:17:19 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

# define ERROR "Error\n"

typedef struct s_node
{
    int content;
    struct s_node *next;
}	t_node;

typedef struct s_stack
{
    int 	content_num;
	int		index;
	char 	*array;
	
}	t_stack;



void	error_h();
char	**ft_split(char const *s, char c);
char	*next_word(char const **s, char c);
int	    count_words(char const *s, char c);
char	**parsing_h(int ac, char **argv);
char	*ft_strjoin_j(char *s1, char *s2);
int	    ft_strlen(const char *str);
void	putstr_fd(char *s, int fd);

#endif
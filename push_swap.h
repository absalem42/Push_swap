/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:43 by absalem           #+#    #+#             */
/*   Updated: 2023/12/27 13:51:59 by absalem          ###   ########.fr       */
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

// typedef struct s_node
// {
//     int content;
//     struct s_node *next;
// }	t_node;

typedef struct s_stack
{
    int 	content;
	int		index;
	// char 	*array;
    struct s_stack *next;
    struct s_stack *prev;
}	t_stack;



void	error_h();
char	**ft_split(char const *s, char c);
char	*next_word(char const **s, char c);
int	    count_words(char const *s, char c);
char	**parsing_h(char **argv);
char	*ft_strjoin_j(char *s1, char *s2);
int	    ft_strlen(const char *str);
void	putstr_fd(char *s, int fd);
void	free_string(char **str);
int is_valid_number(char *str);
int check_input(char **av);
// void ft_stack_add_back(t_stack **lst, t_stack *newnode);
long 	ft_atoi(char *str, int *flag);
void	 ft_ini_stack(t_stack **a, char **str);
int	ft_isdigit(int c);
void	validate_arguments(int argc, char **argv);
int	repeat_check(t_stack *a, int nbr);
void	fill_stack(t_stack **a, int num);
t_stack	*find_last(t_stack *head);
void	ft_lstclear(t_stack **lst, void (*del)(void *));
int    ft_sorted(t_stack **stack_a);

#endif
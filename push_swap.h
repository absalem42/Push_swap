/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:43 by absalem           #+#    #+#             */
/*   Updated: 2024/01/02 17:20:13 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define ERROR "Error\n"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void				error_h(void);
char				**ft_split(char const *s, char c);
char				*next_word(char const **s, char c);
int					count_words(char const *s, char c);
char				**parsing_h(char **argv);
char				*ft_strjoin_j(char *s1, char *s2);
int					ft_strlen(const char *str);
void				ft_putstr_fd(char *s, int fd);
void				free_string(char **str);
int					is_valid_number(char *str);
void				check_input(char **av);
void				ft_stack_add_back(t_stack **lst, t_stack *newnode);
long				ft_atoi(char *str, int *flag);
void				ft_ini_stack(t_stack **a, char **str);
int					ft_isdigit(int c);
void				validate_arguments(int argc, char **argv);
int					repeat_check(t_stack *a, int nbr);
void				fill_stack(t_stack **a, int num);
t_stack				*find_last(t_stack *head);
void				ft_lstclear(t_stack **lst, void (*del)(void *));
int					ft_sorted(t_stack **stack_a);
void				ft_sorting(t_stack **stack_A, t_stack **stack_B);
int					ft_lstsize(t_stack *lst);
t_stack				*ft_lstlast(t_stack *lst);

// operator

void				sb(t_stack **swap);
void				sa(t_stack **swap);
void				swap_ss(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **from, t_stack **to);
void				pb(t_stack **from, t_stack **to);
void				ra(t_stack **stack);
void				rra(t_stack **stack);

void				sorting(t_stack **stack_a, t_stack **stack_b);

void				townumsort(t_stack **stack);
void				threenumsort(t_stack **stack);
void				fournumsort(t_stack **stackA, t_stack **stackB);
void				fivenumsort(t_stack **stack_a, t_stack **stack_b);

int					find_min(t_stack **stack);
int					find_length_min(t_stack **stack);

void				sortrdix(t_stack **stack_a, t_stack **stack_b);

t_stack				*find_min_node(t_stack **stack);
void				indexing(t_stack **stack);

int					find_max_bits(t_stack *stack);
t_stack				*find_max(t_stack *stackA);
t_stack				*find_min_node(t_stack **stack);

#endif
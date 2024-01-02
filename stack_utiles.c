/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:10:39 by absalem           #+#    #+#             */
/*   Updated: 2024/01/02 14:49:07 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ini_stack(t_stack **a, char **str)
{
	int			i;
	long long	num;
	int			flag;

	if (!str)
		return ;
	flag = 1;
	i = 0;
	while (str[i])
	{
		num = ft_atoi(str[i], &flag);
		if (flag == 0)
		{
			return (free_string(str), ft_lstclear(a, free), error_h());
		}
		if (repeat_check(*a, (int)num))
		{
			return (free_string(str), ft_lstclear(a, free), error_h());
		}
		fill_stack(a, (int)num);
		i++;
	}
	free_string(str);
}

void	fill_stack(t_stack **a, int num)
{
	t_stack	*temp;
	t_stack	*last_node;

	if (!a)
		return ;
	last_node = NULL;
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return ;
	temp->content = num;
	temp->index = -1;
	temp->next = NULL;
	if (!*a)
	{
		*a = temp;
		temp->prev = NULL;
	}
	else
	{
		last_node = ft_lstlast(*a);
		last_node->next = temp;
		temp->prev = last_node;
	}
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	ft_sorted(t_stack **stack_a)
{
	t_stack	*a;

	a = *stack_a;
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

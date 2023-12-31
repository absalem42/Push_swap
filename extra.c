/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:11:15 by absalem           #+#    #+#             */
/*   Updated: 2023/12/30 16:21:43 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}

void	ft_stack_add_back(t_stack **lst, t_stack *newnode)
{
	t_stack	*current;

	if (!*lst)
	{
		*lst = newnode;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newnode;
}

int	find_min(t_stack **stack)
{
	int		min;
	t_stack	*node;

	node = *stack;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->content)
			min = node->content;
		node = node->next;
	}
	return (min);
}

int	find_length_min(t_stack **stack)
{
	int		i;
	t_stack	*node;

	node = *stack;
	i = 0;
	while (node != NULL)
	{
		if (find_min(stack) == node->content)
			break ;
		i++;
		node = node->next;
	}
	return (i);
}

// int	find_length_index(t_stack **stackA, int index)
// {
// 	int		i;
// 	t_stack	*node;

// 	i = 0;
// 	node = *stackA;
// 	while (node != NULL)
// 	{
// 		if (node->index == index)
// 			break ;
// 		i++;
// 		node = node->next;
// 	}
// 	return (i);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:10:39 by absalem           #+#    #+#             */
/*   Updated: 2023/12/30 16:23:56 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ini_stack(t_stack **a, char **str)
{
	int		i;
	long	num;
	int		flag;

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
<<<<<<< HEAD
=======
	// swap(a);
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea
	free_string(str);
}

void	fill_stack(t_stack **a, int num)
{
	t_stack	*temp;
	t_stack	*prev_node;

	if (!a)
		return ;
	prev_node = NULL;
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
		prev_node = ft_lstlast(*a);
		prev_node->next = temp;
		temp->prev = prev_node;
	}
}

<<<<<<< HEAD
// t_stack	*find_last(t_stack *head)
// {
// 	if (!head)
// 		return (NULL);
// 	while (head->next)
// 		head = head->next;
// 	return (head);
// }
=======
t_stack	*find_last(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea

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
	t_stack *a;

	a = *stack_a;
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}
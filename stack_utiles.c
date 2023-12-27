/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:10:39 by absalem           #+#    #+#             */
/*   Updated: 2023/12/27 15:58:12 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_stack_add_back(t_stack **lst, t_stack *newnode)
// {
// 	t_stack *current;

// 	if (!*lst)
// 	{
// 		*lst = newnode;
// 		return ;
// 	}
// 	current = *lst;
// 	while (current->next != NULL)
// 	{
// 		current = current->next;
// 	}
// 	current->next = newnode;
// }

void	 ft_ini_stack(t_stack **a, char **str)
{
	int		i;
	long	num;
	int 	flag;

	if (!str)
		return ;
	flag = 1;
	i = 0;
	while (str[i])
	{
		num = ft_atoi(str[i], &flag);
		if (flag == 0)
		{
            return(free_string(str), ft_lstclear(a, free), error_h());
		}
		if (repeat_check(*a, (int)num))
		{
			return(free_string(str), ft_lstclear(a, free), error_h());		
		}
		fill_stack(a, (int)num);
		i++;
	}
	free_string(str);
}

void	fill_stack(t_stack **a, int num)
{
	t_stack *temp;
	t_stack *prev_node;
	
	if (!a)
		return;
	prev_node = NULL;
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return;
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
		prev_node = find_last(*a);
		prev_node->next = temp;
		temp->prev = prev_node;
	}
}

t_stack	*find_last(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next) 
		head = head->next;
	return (head);
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

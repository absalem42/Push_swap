/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:37:50 by absalem           #+#    #+#             */
/*   Updated: 2024/01/01 17:03:11 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **swap)
{
	int	a;
	int	b;

	if (*swap == NULL || ft_lstsize(*swap) == 1)
		return ;
	a = (*swap)->content;
	b = (*swap)->next->content;
	(*swap)->content = b;
	(*swap)->next->content = a;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **swap)
{
	int	a;
	int	b;

	if (*swap == NULL || ft_lstsize(*swap) == 1)
		return ;
	a = (*swap)->content;
	b = (*swap)->next->content;
	(*swap)->content = b;
	(*swap)->next->content = a;
	ft_putstr_fd("sb\n", 1);
}

void	swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_stack **from, t_stack **to)
{
	t_stack	*temp;

	if (*from == NULL)
		return ;
	temp = (*from);
	(*from) = (*from)->next;
	temp->next = (*to);
	(*to) = temp;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **from, t_stack **to)
{
	t_stack	*temp;

	if (*from == NULL)
		return ;
	temp = (*from);
	(*from) = (*from)->next;
	temp->next = (*to);
	(*to) = temp;
	ft_putstr_fd("pb\n", 1);
}

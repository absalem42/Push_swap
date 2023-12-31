/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:38:03 by absalem           #+#    #+#             */
/*   Updated: 2023/12/28 14:26:06 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack)
{
	t_stack	*temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	(*stack) = (*stack)->next;
	temp->next = NULL;
	ft_stack_add_back(stack, temp);
	ft_putstr_fd("ra\n", 1);
}
void	rra(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second_last;
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = ft_lstlast(*stack);
	second_last = *stack;
	first = *stack;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	second_last->next = NULL;
	last->next = first;
	*stack = last;
	ft_putstr_fd("rra\n", 1);
}

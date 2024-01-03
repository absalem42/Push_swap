/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_al.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:27:12 by absalem           #+#    #+#             */
/*   Updated: 2024/01/03 13:56:03 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min_node(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*head;
	int		flag;

	flag = 0;
	temp = NULL;
	head = (*stack);
	while (head)
	{
		if (head->index == -1 && (flag == 0 || temp->content > head->content))
		{
			temp = head;
			flag = 1;
		}
		head = head->next;
	}
	return (temp);
}

void	indexing(t_stack **stack)
{
	t_stack	*temp;
	int		index;

	if (stack == NULL)
		return ;
	index = 0;
	temp = find_min_node(stack);
	while (temp)
	{
		temp->index = index++;
		temp = find_min_node(stack);
	}
}

int	find_max_bits(t_stack *stack)
{
	int	max_bits;
	int	num_bits;
	int	num;

	max_bits = 0;
	while (stack)
	{
		num_bits = 0;
		num = stack->index;
		if (num < 0)
			num *= -1;
		while (num > 0)
		{
			num >>= 1;
			num_bits++;
		}
		if (num_bits > max_bits)
			max_bits = num_bits;
		stack = stack->next;
	}
	return (max_bits);
}

void	sortrdix(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	size = ft_lstsize(*stack_a);
	indexing(stack_a);
	max_bits = find_max_bits(*stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size && !ft_sorted(stack_a))
		{
			if (*stack_a && (((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b)
			pa(stack_b, stack_a);
		i++;
	}
}

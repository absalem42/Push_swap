/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:40:02 by absalem           #+#    #+#             */
/*   Updated: 2023/12/30 15:05:49 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	townumsort(t_stack **stack)
{
	if ((*stack)->content > (*stack)->next->content)
		sa(stack);
}
<<<<<<< HEAD
=======
// void	threenumsort(t_stack **stack)
// {
// 	if((*stack)->content > (*stack)->next->content)
// 		sa(stack);
// 	if((*stack)->next->content > (*stack)->next->next->content)
// 		sa(stack);
// 	if((*stack)->content > (*stack)->next->content)
// 		sa(stack);
// }

// void threenumsort(t_stack **stack)
// {
//     if ((*stack)->content > (*stack)->next->content)
//         sa(stack);

//     if ((*stack)->next->content > (*stack)->next->next->content)
//         sa(&((*stack)->next));

//     if ((*stack)->content > (*stack)->next->content)
//         sa(stack);
// }
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea

void	threenumsort(t_stack **stack)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = (*stack)->content;
	num2 = (*stack)->next->content;
	num3 = (*stack)->next->next->content;
	if (num1 < num2 && num2 < num3 && num1 < num3)
		return ;
	else if (num1 > num2 && num2 < num3 && num1 < num3)
		sa(stack);
	else if (num1 > num2 && num2 > num3 && num1 > num3)
	{
		sa(stack);
		rra(stack);
	}
	else if (num1 > num2 && num2 < num3 && num1 > num3)
		ra(stack);
	else if (num1 < num2 && num2 > num3 && num1 < num3)
	{
		sa(stack);
		ra(stack);
	}
	else if (num1 < num2 && num2 > num3 && num1 > num3)
		rra(stack);
}
<<<<<<< HEAD

void	fournumsort(t_stack **stackA, t_stack **stackB)
{
	int	min;

	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		ra(stackA);
	}
	pb(stackA, stackB);
	threenumsort(stackA);
	pa(stackB, stackA);
}

void	fivenumsort(t_stack **stackA, t_stack **stackB)
{
	int	min;

	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		if (find_length_min(stackA) > ft_lstsize(*stackA) / 2)
			rra(stackA);
		else
			ra(stackA);
	}
	pb(stackA, stackB);
	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		if (find_length_min(stackA) > (ft_lstsize(*stackA) / 2))
			rra(stackA);
		else
			ra(stackA);
	}
	pb(stackA, stackB);
	threenumsort(stackA);
	pa(stackB, stackA);
	pa(stackB, stackA);
}
=======
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:40:02 by absalem           #+#    #+#             */
/*   Updated: 2023/12/28 18:31:14 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    townumsort(t_stack **stack)
{
	if ((*stack)->content > (*stack)->next->content)
	    sa(stack);
}
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



void threenumsort(t_stack **stack)
{
	int num1;
	int num2;
	int num3;
	
	num1 = (*stack)->content;
	num2 = (*stack)->next->content;
	num3 =(*stack)->next->next->content;
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


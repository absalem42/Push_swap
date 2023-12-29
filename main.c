/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:54 by absalem           #+#    #+#             */
/*   Updated: 2023/12/29 14:56:08 by a                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stake_a)
{
	t_stack	*current;

	current = stake_a;
	printf("Stack A contents:\n");
	while (current != NULL)
	{
		printf("Content: %d, Index: %d\n", current->content, current->index);
		current = current->next;
	}
}

void	print_stack_B(t_stack *stake_a)
{
	t_stack	*current;

	current = stake_a;
	printf("Stack B contents:\n");
	while (current != NULL)
	{
		printf("Content : %d, Index: %d\n", current->content, current->index);
		current = current->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	validate_arguments(ac, av);
	av = parsing_h(av);
	ft_ini_stack(&stack_a, av);
	// push(&stack_a, &stack_b);
	// rra(&stack_a);
	if (ft_sorted(&stack_a))
	{
		ft_lstclear(&stack_a, free);
		exit(1);
	}
	sorting(&stack_a, &stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	// free_string(av);
	ft_lstclear(&stack_a, free);
	return (0);
}

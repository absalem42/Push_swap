/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:54 by absalem           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/12/31 11:05:15 by absalem          ###   ########.fr       */
=======
/*   Updated: 2023/12/29 14:56:08 by a                ###   ########.fr       */
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea
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
<<<<<<< HEAD
=======
	// push(&stack_a, &stack_b);
	// rra(&stack_a);
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea
	if (ft_sorted(&stack_a))
	{
		ft_lstclear(&stack_a, free);
		exit(1);
	}
<<<<<<< HEAD
	sorting(&stack_a, &stack_b);
	print_stack(stack_a);
	print_stack_B(stack_b);
=======
	sorting(&stack_a, &stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	// free_string(av);
>>>>>>> b94cff0eeb9d5b22086a0faf63bee877e01e9dea
	ft_lstclear(&stack_a, free);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:54 by absalem           #+#    #+#             */
/*   Updated: 2024/01/02 16:57:23 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (ft_sorted(&stack_a))
	{
		ft_lstclear(&stack_a, free);
		exit(1);
	}
	sorting(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	return (0);
}

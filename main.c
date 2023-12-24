/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:54 by absalem           #+#    #+#             */
/*   Updated: 2023/12/21 16:16:46 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    
    stack_a = NULL;
    stack_b = NULL;
    
    if (1 == ac || (ac == 2 && !av[1][0]))
	{
		putstr_fd(ERROR, STDERR_FILENO);
	    exit(EXIT_FAILURE);
    }
    av = parsing_h(ac-1, av);
    check_input(char **av)
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:54 by absalem           #+#    #+#             */
/*   Updated: 2023/12/21 15:13:20 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    
    stack_a = NULL;
    stack_b = NULL;
    
    if (ac == 1)
        exit(EXIT_SUCCESS);
    av = parsing_h(ac-1, av);
	
}

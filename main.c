/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:14:54 by absalem           #+#    #+#             */
/*   Updated: 2023/12/27 15:51:40 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack *stake_a) {
    t_stack *current = stake_a;

    printf("Stack contents:\n");
    while (current != NULL) {
        printf("Content: %d, Index: %d\n", current->content, current->index);
        current = current->next;
    }
}

int	main(int ac, char **av)
{
    t_stack *stack_a;
    // t_stack *stack_b;
    
    stack_a = NULL;
    // stack_b = NULL;
    if (ac == 1)
        return (0);
    // if ((ac == 2 && !av[1][0]))
	// {
	// 	putstr_fd(ERROR, STDERR_FILENO);
	//     exit(EXIT_FAILURE);
    // }
    validate_arguments(ac,av);
    av = parsing_h(av);
    ft_ini_stack(&stack_a,av);
    if (ft_sorted(&stack_a))
    {
        ft_lstclear(&stack_a, free);
		exit(1);
    }
    print_stack(stack_a);
    // printf("%d",stack_a->content);
    // free_string(av);
    ft_lstclear(&stack_a, free);
    return 0;  
}

int    ft_sorted(t_stack **stack_a)
{
    t_stack *a;
    
    a = *stack_a;
    while (a->next) 
    {
        if (a->content > a->next->content)
            return(0);
        a = a->next;
    }
    return(1);
}


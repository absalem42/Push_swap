/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:10:39 by absalem           #+#    #+#             */
/*   Updated: 2023/12/25 14:28:37 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_stack_add_back(t_stack **lst, t_stack *newnode)
// {
// 	t_stack *current;

// 	if (!*lst)
// 	{
// 		*lst = newnode;
// 		return ;
// 	}
// 	current = *lst;
// 	while (current->next != NULL)
// 	{
// 		current = current->next;
// 	}
// 	current->next = newnode;
// }
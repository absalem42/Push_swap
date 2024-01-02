/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:26:41 by absalem           #+#    #+#             */
/*   Updated: 2024/01/02 13:16:43 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	repeat_check(t_stack *a, int nbr)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->content == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	is_valid_number(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!(*str >= '0' && *str <= '9'))
		return (1);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		str++;
	}
	return (0);
}

void	validate_arguments(int ac, char **av)
{
	int	i;
	int	j;

	if (!ac || !av)
		error_h();
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] != ' ' && av[i][j] != '\t' && av[i][j] != '\n'
				&& av[i][j] != '\v' && av[i][j] != '\f' && av[i][j] != '\r')
			{
				break ;
			}
			++j;
		}
		if (av[i][j] == '\0')
		{
			error_h();
		}
		++i;
	}
}

void	error_h(void)
{
	ft_putstr_fd(ERROR, 2);
	exit(EXIT_FAILURE);
}

void	ft_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*s;

	if (lst)
	{
		while (*lst)
		{
			s = (*lst)->next;
			del(*lst);
			*lst = s;
		}
	}
}

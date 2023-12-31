/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:02:24 by absalem           #+#    #+#             */
/*   Updated: 2023/12/31 17:00:15 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

char	*join_str(char **str)
{
	char	*join;
	int		i;

	join = NULL;
	i = 1;
	if (!str)
		error_h();
	while (str[i])
	{
		join = ft_strjoin_j(join, str[i]);
		join = ft_strjoin_j(join, " ");
		i++;
	}
	return (join);
}

int	check_input(char **av)
{
	int	i;

	i = 0;
	if (av[0] == NULL)
		error_h();
	while (av[i])
	{
		if (is_valid_number(av[i]))
		{
			free_string(av);
			error_h();
		}
		i++;
	}
	return (1);
}

char	**parsing_h(char **av)
{
	char	**split;
	char	*join;

	if (!av)
		error_h();
	join = join_str(av);
	split = ft_split(join, ' ');
	if (!split)
	{
		free_string(split);
		error_h();
	}
	free(join);
	check_input(split);
	return (split);
}

void	sorting(t_stack **stacka, t_stack **stackb)
{
	int	length;

	length = ft_lstsize(*stacka);
	if (length == 2)
		townumsort(stacka);
	if (length == 3)
		threenumsort(stacka);
	if (length == 4)
		fournumsort(stacka, stackb);
	if (length == 5)
		fivenumsort(stacka, stackb);
	if (length > 5)
		sortrdix(stacka, stackb);
}

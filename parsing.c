/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:02:24 by absalem           #+#    #+#             */
/*   Updated: 2023/12/27 16:02:20 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_str(char **str)
{
	char	*join;
	int i;
	
	join = NULL;
	i = 1;
	if (!str)
		error_h();
	while (str[i])
	{
		join = ft_strjoin_j(join, str[i]);
		join = ft_strjoin_j(join," ");
		i++;
	}
	return(join);
}

int check_input(char **av)
{
	int i;

    i = 0;
	if (av[0] == NULL)
		error_h();
	while  (av[i])
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
	char **split;
	char *join;

	split = NULL;
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
	return(split);
}


// void	ft_sorting(t_stack **stackA, t_stack **stackB)
// {
// 	int	length;
	
// 	length = ft_lstsize(*stackA);
// 	if (length == 2)
// 		sort2na(stackA);
// 	if (length == 3)
// 		sort3n(stackA);
// 	if (length == 4)
// 		sort4n(stackA, stackB);
// 	if (length == 5)
// 		sort5n(stackA, stackB);
// 	if (length > 5)
// 		sort100n(stackA, stackB);
// }


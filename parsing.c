/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:02:24 by absalem           #+#    #+#             */
/*   Updated: 2023/12/21 16:14:18 by absalem          ###   ########.fr       */
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
char	**parsing_h(int ac, char **av)
{
	(void)ac;
	char **split;
	char *join;

	split = NULL;
	if (!av)
		error_h();
	join = join_str(av);
	split = ft_split(join, ' ');
	
	return(split);
}

int check_input(char **av)
{
	int i;

    i = 0;
	if (av[0] == NULL)
		error_h();
	while  (av[i])
	{
        if (!is_valid_number(av[i]))
		{
			free_string(av);
            error_h();
		}
		i++;
    }
	return (1);
}

int is_valid_number(char *str)
{
    if (*str == '-' || *str == '+')
        str++;
    while (*str)
	{
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return (1);
}

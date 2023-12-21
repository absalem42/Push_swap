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
	int i;

	i = 1;
	split = NULL;
	if (!av)
		error_h();
	join = join_str(av);
	split = ft_split(join, ' ');
	
	return(split);
}

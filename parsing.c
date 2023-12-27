/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:02:24 by absalem           #+#    #+#             */
/*   Updated: 2023/12/27 14:56:36 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

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
void	validate_arguments(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		if (!av[i][0] || (av[i][0] && av[i][0] == ' '))
			error_h();
	}
}

void	 ft_ini_stack(t_stack **a, char **str)
{
	int		i;
	long	num;
	int 	flag;

	if (!str)
		return ;
	flag = 1;
	i = 0;
	while (str[i])
	{
		num = ft_atoi(str[i], &flag);
		if (flag == 0)
		{
            error_h();
            free_string(str);
            return;
		}
		if (repeat_check(*a, (int)num))
		{
			return(free_string(str), ft_lstclear(a, free), error_h());		
		}
		fill_stack(a, (int)num);
		i++;
	}
	free_string(str);
}


void	fill_stack(t_stack **a, int num)
{
	t_stack *temp;
	t_stack *prev_node;
	
	if (!a)
		return;
	prev_node = NULL;
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return;
	temp->content = num;
	temp->index = -1;
	temp->next = NULL;
	if (!*a)
	{
		*a = temp;
		temp->prev = NULL;
	}
	else 
	{
		prev_node = find_last(*a);
		prev_node->next = temp;
		temp->prev = prev_node;
	}
}

t_stack	*find_last(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next) 
		head = head->next;
	return (head);
}


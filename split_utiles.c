/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:57:31 by absalem           #+#    #+#             */
/*   Updated: 2023/12/27 16:36:20 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_str_init(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	str[0] = 0;
	return (str);
}

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	*next_word(char const **s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = (*s)[i];
		i++;
	}
	word[i] = '\0';
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		num_words;
	int		i;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < num_words)
	{
		while (*s && *s == c)
			s++;
		split[i] = next_word(&s, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	*ft_strjoin_j(char *s1, char *s2)
{
	char	*strj;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_str_init();
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	strj = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strj)
		return (0);
	while (s1[i])
	{
		strj[i] = s1[i];
		i++;
	}
	while (s2[j])
		strj[i++] = s2[j++];
	strj[ft_strlen(s1) + ft_strlen(s2)] = 0;
	free(s1);
	return (strj);
}

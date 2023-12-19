/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem < absalem@student.42abudhabi.ae    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:02:24 by absalem           #+#    #+#             */
/*   Updated: 2023/10/10 13:14:51 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_words(char const *s, char c)
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

static char	*next_word(char const **s, char c)
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

void    check_numeric()
{
    
}

char *str_join(int size, char **strs, char *sep)
{
 char *s;
 int i;
 int j;
 int c;

 s = malloc(sizeof(strs));
 i = 0;
 c = 0;
 while (i < size)
 {
  j = 0;
  while (strs[i][j] != '\0')
  {
   s[c++] = strs[i][j++];
  }
  j = 0;
  while (sep[j] != '\0' && i != size - 1)
  {
   s[c++] = sep[j++];
  }
  i++;
 }
 s[c] = '\0';
 return (s);
}

int main(int argc, char **argv)
{
    char *arr;
    char **out;
    
    arr = str_join(argv);
    out = ft_split(arr, ' ');
    
}
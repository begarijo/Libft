/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:25:23 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:47:43 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Calculates the amount of words in the str, delimitated by 'c'.
 * So, in case there's no 'c' it adds a word.*/

int	count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	w;

	i = 0;
	count = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && w == 0)
		{
			w = 1;
			count += 1;
		}
		else if (s[i] == c)
			w = 0;
		i++;
	}
	return (count);
}

/*Calculates the total length of the word, ignoring the 'c'.*/

static int	count_len(char *s, int *i, char c)
{
	int	len;
	int	j;

	len = 0;
	while ((s[*i] == c) && s[*i])
	{
		*i += 1;
	}
	j = *i;
	while (s[j] && (s[j] != c))
	{
		j++;
		len++;
	}
	return (len);
}

/*It 'writes' the word the function count_len calculate.*/

static int	w_word(char *s, char **p, int *i, char c)
{
	int		wordsize;
	int		k;
	int		q;
	char	*word;

	wordsize = count_len(s, i, c);
	q = 0;
	while (wordsize != 0)
	{
		word = (char *)ft_calloc(sizeof (char), (wordsize + 1));
		if (!word)
			return (1);
		k = 0;
		while (k < wordsize)
		{
			word[k++] = s[*i];
			*i += 1;
		}
		word[k] = '\0';
		p[q] = word;
		q++;
		wordsize = count_len(s, i, c);
	}
	p[q] = NULL;
	return (0);
}

/*By moving in the str, looking for the char that it's going to delimitate
 * our 'words', it separates them.
 *
 * Once it separates, it save then in another str, to return it individually in 
 * every call.*/

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		j;
	int		error;

	if (!s)
		return (NULL);
	i = count_word(s, c);
	str = (char **)ft_calloc(sizeof (char *), i + 1);
	if (!str)
		return (NULL);
	j = 0;
	error = w_word((char *) s, str, &j, c);
	if (error)
	{
		j = 0;
		while (str[j])
		{
			free(str[j]);
			j++;
		}
		free(str);
		return (NULL);
	}
	return (str);
}

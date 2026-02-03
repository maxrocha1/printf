/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:23:59 by mmacari-          #+#    #+#             */
/*   Updated: 2026/01/30 19:58:52 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, size_t *start)
{
	size_t	i;
	size_t	word_start;

	i = *start;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	word_start = i;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	*start = i;
	if (word_start == i)
		return (NULL);
	return (ft_substr(s, word_start, i - word_start));
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	start;
	size_t	j;
	char	*word;

	start = 0;
	j = 0;
	if (!s)
		return (NULL);
	res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (s[start])
	{
		word = get_next_word(s, c, &start);
		if (!word)
			break ;
		res[j] = word;
		if (!res[j++])
			return (free_all(res, j - 1), NULL);
	}
	return (res);
}

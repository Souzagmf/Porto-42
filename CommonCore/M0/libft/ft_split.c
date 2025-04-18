/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:39:45 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:48:57 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	word_count(char const *str, char sep)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && str[i] != sep)
		{
			count++;
			while (str[i] != sep)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**split_words(char **result, char const *str, char sep)
{
	size_t	start;
	size_t	index_letter;
	size_t	index_words;

	index_letter = 0;
	index_words = index_letter;
	start = index_letter;
	while (str[index_letter])
	{
		if (str[index_letter] && str[index_letter] != sep)
		{
			start = index_letter;
			while (str[index_letter] != sep)
				index_letter++;
			result[index_words] = ft_substr(str, start, index_letter - start);
			if (!result[index_words])
			{
				free_split(result, index_words);
				return (NULL);
			}
			index_words++;
		}
		index_letter++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	result = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	return (split_words(result, s, c));
}

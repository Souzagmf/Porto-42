/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:39:45 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/05/18 17:42:15 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i <= count)
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
	while (str[i] != '\0')
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char *ft_strndup(const char *s, size_t n)
{
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * (n + 1));
	if(ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, n + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int 	word;
	int		start;
	int		end;

	splited = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !splited)
		return (NULL);
	word = 0;
	start = 0;
	end = 0;
	while (word < word_count(s, c))
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != c && s[end] != '\0')
			end++;
		splited[word] = ft_strndup(&s[start], end - start);
		if (!splited[word])
			return (free_split(splited, word), NULL);
		word++;
	}
	splited[word] = NULL;
	return (splited);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:20:35 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:36:19 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *s, char c)
{
	size_t	len;
	char	*word;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static	void	free_split(char **split)
{
	size_t	i;

	i = 0;
	if (split == NULL)
		return ;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static	char	**make_split(char const *s, char c, char **split)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = copy_word(s, c);
			if (split[i] == NULL)
			{
				free_split(split);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**split;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc((word_count + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split = make_split(s, c, split);
	return (split);
}

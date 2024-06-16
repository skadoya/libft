/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:25:43 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/06 14:04:21 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
static	char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	trimmed_len = end - start;
	if (trimmed_len == 0)
		return (ft_strdup(""));
	trimmed_str = (char *)malloc(trimmed_len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strncpy(trimmed_str, s1 + start, trimmed_len);
	trimmed_str[trimmed_len] = '\0';
	return (trimmed_str);
}

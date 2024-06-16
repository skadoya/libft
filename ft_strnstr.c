/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:51:54 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/03 21:16:27 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	str2_len;
	size_t	i;

	if (*str2 == '\0')
		return ((char *)str1);
	if (len == 0)
		return (NULL);
	str2_len = 0;
	while (str2[str2_len] != '\0')
		str2_len++;
	while (*str1 != '\0' && len >= str2_len)
	{
		i = 0;
		while (i < str2_len && str1[i] == str2[i])
			i++;
		if (i == str2_len)
			return ((char *)str1);
		str1++;
		len--;
	}
	return (NULL);
}

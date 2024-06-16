/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:09:53 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:32:18 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
int main() {
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t new_len = ft_strlcat(dest, src, sizeof(dest));
    printf("Concatenated string: %s\n", dest);
    printf("New length: %zu\n", new_len);
    return 0;
}
*/
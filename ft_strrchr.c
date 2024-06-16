/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:57:44 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:32:51 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last_c;
	unsigned char	ch;

	ch = (unsigned char)c;
	last_c = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			last_c = s;
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return ((char *)last_c);
}

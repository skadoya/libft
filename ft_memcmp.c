/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:49:22 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:30:30 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h> // for memcmp
int main() {
    const char *str1 = "Hello";
    const char *str2 = "World";
    size_t len = 5;

    // Using memcmp
    printf("Using memcmp:\n");
    int result1 = memcmp(str1, str2, len);
    if (result1 == 0)
        printf("Strings are equal\n");
    else if (result1 < 0)
        printf("str1 is less than str2\n");
    else
        printf("str1 is greater than str2\n");

    // Using ft_memcmp
    printf("\nUsing ft_memcmp:\n");
    int result2 = ft_memcmp(str1, str2, len);
    if (result2 == 0)
        printf("Strings are equal\n");
    else if (result2 < 0)
        printf("str1 is less than str2\n");
    else
        printf("str1 is greater than str2\n");

    return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:13:32 by skadoya           #+#    #+#             */
/*   Updated: 2024/04/28 13:25:37 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char str[20] = "Hello, world!";
    char str1[20] = "AAAAA, AAAAA!";
    
    printf("Before ft_bzero: %s\n", str);

    ft_bzero(str, 5);
    printf("After ft_bzero: %s\n", str);
    
    bzero(str1, 5);
    printf("After bzero: %s\n", str1);

    return 0;
}
*/
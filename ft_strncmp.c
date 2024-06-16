/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:52:46 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/03 15:54:36 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "ABC";
    printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 2));
    printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
    
    printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
        printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
    
    printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 0));
     printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 0));
    
    printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
    printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
    
    printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
        printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
    
    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
        printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
        
        
    printf("ABC: A     = %d\n", strncmp(str, "A", 2));
        printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));

    printf("ABC: ABC     = %d\n", strncmp(str, "ABC", 2));
        printf("ABC: ABC     = %d\n", ft_strncmp(str, "ABC", 2));

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:34:16 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 16:05:24 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main() {
    char uppercase = 'H';
    char lowercase = ft_tolower(uppercase);
    printf("Uppercase: %c, Lowercase: %c\n", uppercase, lowercase);
    
    char notUppercase = '5';
    char unchanged = ft_tolower(notUppercase);
    printf("Not uppercase: %c, Unchanged: %c\n", notUppercase, unchanged);
    
    return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:19:30 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 16:05:30 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}
/*
int main() {
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);
    printf("Lowercase: %c, Uppercase: %c\n", lowercase, uppercase);
    
    char notLowercase = '5';
    char unchanged = ft_toupper(notLowercase);
    printf("Not lowercase: %c, Unchanged: %c\n", notLowercase, unchanged);
    
    return 0;
}
*/
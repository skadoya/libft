/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:14:55 by skadoya           #+#    #+#             */
/*   Updated: 2024/04/28 13:49:16 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
int main() {
    char ch1 = 'A';
    char ch2 = '5';

    printf("Is '%c' an alphabet character? %s\n", 
	ch1, ft_isalpha(ch1) ? "Yes" : "No");
    printf("Is '%c' an alphabet character? %s\n", 
	ch2, ft_isalpha(ch2) ? "Yes" : "No");

    return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:00:07 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:29:08 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int main(void)
{
    char test_char = 'A';
    
    if (ft_isascii(test_char))
        printf("%c is an ASCII character.\n", test_char);
    else
        printf("%c is not an ASCII character.\n", test_char);
    
    return 0;
}
*/
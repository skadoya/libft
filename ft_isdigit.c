/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:15:47 by skadoya           #+#    #+#             */
/*   Updated: 2024/04/28 13:38:38 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
int main() {
    char test_char;

    //printf("Enter a character: ");
    //scanf("%c", &test_char);

    test_char = 8;
    
    if (ft_isdigit(test_char)) {
        printf("%c is a digit.\n", test_char);
    } else {
        printf("%c is not a digit.\n", test_char);
    }

    if (isdigit(test_char)) {
        printf("%c is a digit.\n", test_char);
    } else {
        printf("%c is not a digit.\n", test_char);
    }
    
    return 0;
}
*/

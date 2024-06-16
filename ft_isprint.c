/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:16:33 by skadoya           #+#    #+#             */
/*   Updated: 2024/04/28 13:36:43 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int main() {
    char c = 'A';
    printf("Is '%c' printable? %s\n", c, ft_isprint(c) ? "Yes" : "No");
    c = '\n';
    printf("Is '\\n' printable? %s\n", ft_isprint(c) ? "Yes" : "No");
    c = 127;
    printf("Is ASCII character 127 printable? %s\n", 
	ft_isprint(c) ? "Yes" : "No");
    return 0;}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:19:15 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:34:59 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static	char	*make_str(int n, int digits, char *str)
{
	int		is_negative;
	int		i;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	i = digits - 1;
	while (i >= 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	if (is_negative)
		str[0] = '-';
	str[digits] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (make_str(n, digits, str));
}

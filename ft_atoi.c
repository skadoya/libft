/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:55:47 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/26 19:34:22 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	overflow(int sign, unsigned long num, long nextnum)
{
	if (num > LONG_MAX / 10)
		return (1);
	if (num == LONG_MAX / 10)
	{
		if (sign > 0)
		{
			if (LONG_MAX % 10 < nextnum)
				return (1);
		}
		if (sign < 0)
		{
			if (LONG_MIN % 10 > (-1) * nextnum)
				return (1);
		}
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] != '\0' && ((9 <= str[i] && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		if (overflow(sign, res, str[i] - '0'))
		{
			if (sign > 0)
				return ((int)LONG_MAX);
			return ((int)LONG_MIN);
		}
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eholzer <eholzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:39:01 by eholzer           #+#    #+#             */
/*   Updated: 2022/10/26 15:48:12 by eholzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		res *= nb;
	return (res);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb_len;
	int	res;

	i = 0;
	sign = 1;
	nb_len = 0;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (str[i] >= '0' && str[i++] <= '9')
		nb_len++;
	i = 0;
	while (i < nb_len)
	{
		res += (str[i] - '0') * power(10, nb_len - 1 - i);
		i++;
	}
	return (res * sign);
}

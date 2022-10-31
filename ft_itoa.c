/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eric <eric@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:52:28 by eric              #+#    #+#             */
/*   Updated: 2022/10/30 21:43:02 by eric             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n_len()
// allocate an array of n_len() + 1 slots
// parse each unit in each slot
// voila 

// handle the case "0"

#include "libft.h"

static int	n_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	power(int n, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power--)
		res *= n;
	return (res);
}

int	abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

void	if_int_min(int n, char *str)
{
	if (n == (__INT_MAX__ * - 1) - 1)
	{
		ft_memcmp(str, "");
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;
	int		u;
	int		is_negative;

	len = n_len(n);
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	i = 0;
	str = malloc(sizeof(char) * (len + is_negative + 1));
	if (!str)
		return (NULL);
	if (is_negative)
		str[i++] = '-';
	while (i < len + is_negative)
	{
		u = abs(n) / power(10, len - 1 - i + is_negative);
		str[i] = '0' + u;
		n = abs(n) - u * power(10, len - 1 - i + is_negative);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	int	n = -1234;
	printf("%d\n", n_len(n));
	printf("%s", ft_itoa(n));
}

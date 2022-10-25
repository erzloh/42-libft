/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eholzer <eholzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:21:43 by eric              #+#    #+#             */
/*   Updated: 2022/10/25 15:55:01 by eholzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	uchar_c;

	uchar_c = (unsigned char)c;
	if (uchar_c >= '0' && uchar_c <= '9')
		return (1);
	return (0);
}

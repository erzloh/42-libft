/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eholzer <eholzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:57:58 by eric              #+#    #+#             */
/*   Updated: 2022/10/26 17:47:52 by eholzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	uchar_c;

	uchar_c = (unsigned char)c;
	if ((uchar_c >= 'a' && uchar_c <= 'z')
		|| (uchar_c >= 'A' && uchar_c <= 'Z'))
		return (1);
	return (0);
}

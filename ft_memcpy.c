/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eholzer <eholzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:36:43 by eric              #+#    #+#             */
/*   Updated: 2022/10/26 17:26:51 by eholzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*uchar_dst;
	const unsigned char	*uchar_src;

	uchar_dst = (unsigned char *)dst;
	uchar_src = (const unsigned char *)src;
	while (n--)
		*uchar_dst++ = *uchar_src++;
	return (dst);
}

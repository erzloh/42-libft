/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eric <eric@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:58:55 by eric              #+#    #+#             */
/*   Updated: 2022/10/15 14:39:04 by eric             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*uchar_s;
	unsigned char		uchar_c;

	uchar_s = (const unsigned char *)s;
	uchar_c = (unsigned char)c;
	while (n--)
		if (*uchar_s++ == uchar_c)
			return ((void *)--uchar_s);
	return (NULL);
}
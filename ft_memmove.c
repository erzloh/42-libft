/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eholzer <eholzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:58:30 by eric              #+#    #+#             */
/*   Updated: 2022/10/27 17:13:16 by eholzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*uchar_dst;
	const unsigned char	*uchar_src;
	unsigned char		*tmp_src;
	size_t				i;

	uchar_dst = (unsigned char *)dst;
	uchar_src = (const unsigned char *)src;
	tmp_src = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!tmp_src)
		return (NULL);
	if (!dst && !src)
		return (0);
	ft_memcpy(tmp_src, uchar_src, len);
	while (i < len)
	{
		uchar_dst[i] = tmp_src[i];
		i++;
	}
	free(tmp_src);
	return (dst);
}

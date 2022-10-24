/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eric <eric@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:28:50 by eric              #+#    #+#             */
/*   Updated: 2022/10/15 10:57:24 by eric             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	
	unsigned char *uchar_b;
	
	uchar_b = (unsigned char *)b;
	while (uchar_b && len-- > 0)
		*(uchar_b++) = (unsigned char)c;
	return (b);
}
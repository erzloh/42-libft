/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eholzer <eholzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:23:57 by eholzer           #+#    #+#             */
/*   Updated: 2022/10/26 12:19:50 by eholzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	char_c;
	int		i;

	char_c = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == char_c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

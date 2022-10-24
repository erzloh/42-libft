/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eric <eric@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:01:27 by eric              #+#    #+#             */
/*   Updated: 2022/10/19 21:01:47 by eric             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	//char	str[50] = "helloManHowAreYou";
	//char	strcpy[20];
	//void	*ptr;
	char s1[] = "eric";
	char s2[20] = "hello ";

	//printf("original string: %s\n", str);
	//ft_memset(str, 'a', 4);
	//ft_bzero(str, 4);
	//ptr = ft_memccpy(strcpy, str, 'y', 7);
	//ft_memmove(str + 5, str, 8);
	//ptr = ft_memchr(str, 'M', 10);
	//printf("%d", ft_memcmp(s1, s2, 7));
	//printf("modified string: %s\n", ptr);
	//printf("return is: %p", ptr);
	//printf("%d", ft_isalnum('/'));
	printf("%zu", ft_strlcat(s2, s1, 8));
	printf("%s", s2);
}
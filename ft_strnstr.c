/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:21:08 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/29 13:23:31 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_size;

	i = 0;
	little_size = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i <= len - little_size)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j])
		{
			if (j == little_size - 1)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
/**/
/*#include <bsd/string.h>*/
/*int	main()*/
/*{*/
/*	char s[] = "abcgdefghss";*/
/*	char d[] = "hahah";*/
/*	int	i = 0;*/
/*	printf("strnstr function %s", strnstr(s, d, i));*/
/*	printf("\n");*/
/*	printf("my function %s", ft_strnstr(s, d, i));*/
/*}*/

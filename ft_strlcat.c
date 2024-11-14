/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:22:43 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/11/10 21:22:43 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = dstlen;
	j = 0;
	while (src[j] && j < (dstsize - dstlen - 1))
	{
		dst[j + dstlen] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

/*#include <stdio.h>*/
/*#include <bsd/string.h>*/
/**/
/*int	main()*/
/*{*/
/*	char	dst[10] = "Hi";*/
/*	char	src[10] = " There";*/
/**/
	/*ft_strlcat(dst, src, -11);*/
/*	strlcat(dst, src, -11);*/
/*	printf("%s", dst);*/
/*}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:23:29 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/11/09 18:23:32 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*#include <bsd/string.h>*/
/*int	main()*/
/*{*/
/*    char src[] = "Hello, World!";*/
/*    char dst[20]; // Destination buffer*/
/*    size_t size = sizeof(dst);*/
/**/
/*    size_t custom_return = ft_strlcpy(dst, src, -1);*/
/*	printf("%s\t%ld\n", dst, custom_return);*/
/*    size_t default_return = strlcpy(dst, src, -1);*/
/*	printf("%s\t%ld\n", dst, default_return);*/
/**/
/*    return 0;*/
/*}*/

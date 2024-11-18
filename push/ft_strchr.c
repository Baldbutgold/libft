/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:23:02 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/27 17:23:04 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/**/
/*#include <stdio.h>*/
/*int	main()*/
/*{*/
/*	printf("%s",ft_strchr("Hello there", 'h'));*/
/*}*/

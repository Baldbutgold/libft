/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:32:07 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/28 17:13:16 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[--i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
/*#include <string.h>*/
/*int	main()*/
/*{*/
/*	char c;*/
/*	c = 0;*/
/*	printf("This is custom : %s\n", ft_strrchr("hello", c));*/
/*	printf("This is basic : %s\n", strrchr("hello", c));*/
/*}*/

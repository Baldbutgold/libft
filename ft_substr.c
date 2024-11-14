/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:51:59 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/11/11 08:58:47 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start > len || str[0] == '\0')
		return (0);
	substr = malloc((len - start + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (start < len)
		substr[i++] = str[start++];
	return (substr);
}

/*int	main()*/
/*{*/
/*	char const str[] = "Hello";*/
/*	printf("%s", ft_substr(str, 1, 5));*/
/*}*/

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
	size_t	s_len;

	s_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (start > len)
		return (ft_strdup(""));
	substr = malloc((s_len - start) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (start < len)
		substr[i++] = str[start++];
	substr[i] = 0;
	return (substr);
}
/**/
/*int	main()*/
/*{*/
/*	char const str[] = "Hello";*/
/*	printf("%s", ft_substr(str, 0, 5));*/
/*}*/

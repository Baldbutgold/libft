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
#include <string.h>
/*static int	ft_strndup(char **arr, char const *s, size_t i, size_t len)*/
/*{*/
/*	arr[i] = malloc((len + 1) * sizeof(char));*/
/*	if (!arr[i])*/
/*		return (0);*/
/*	ft_memcpy(arr[i], s, len + 1);*/
/*	arr[i][len] = 0;*/
/*	return (len);*/
/*}*/
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start > len || str[0] == '\0')
		return (NULL);
	substr = malloc((len - start + 1) * sizeof(char));
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

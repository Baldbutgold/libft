/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:21:12 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/11/10 21:21:12 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sample program to show that memcpy() can lose data. 
#include <stdio.h> 
#include <string.h> 
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dest);
}
/*
int main() 
{ 
	char	src[3] = "hi";
	char	dest[3] = "hi";
	return 0; 
}
*/

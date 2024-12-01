/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:25:40 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/23 14:32:50 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main()*/
/*{*/
/*    //1337*/
/*    int	s[80] = {0};*/
/*	ft_memset(s, 53, 3);*/
/*	ft_memset(s, 0, 2);*/
/*	printf("%d", s[0]);*/
/*    return 0;*/
/*}*/

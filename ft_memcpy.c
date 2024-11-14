/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:58:01 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/24 15:48:20 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		n--;
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}

/*#include <stdio.h>*/
/**/
/*int	main()*/
/*{*/
/*	char src[] = "Hello this ahlk;fjsad;lkfj;lksadj;lfj ";*/
/*	char dest[80];*/
/**/
/*	int max;*/
/*	int i; */
/**/
/*	i = 0;*/
/*	max = 12;*/
/*	ft_memcpy(dest, src, max);*/
/*	while (i < max)*/
/*		printf("%c", dest[i++]);*/
/*}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:56 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/24 13:54:58 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i])
		&& s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <string.h>*/
/*#include <stdio.h>*/
/**/
/*int	main()*/
/*{*/
/*	int t;*/
/*	t = 7;*/
/*	const char * s = "abc\200 ";*/
/*	const char * s1 = "abc\0 ";*/
/*	printf("mine %d\n", ft_strncmp(s, s1, t));*/
/*	printf("theirs %d", strncmp(s, s1, t));*/
/*}*/
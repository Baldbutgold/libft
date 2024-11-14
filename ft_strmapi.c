/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:40:45 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/11/14 20:43:53 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_cpy;

	s_cpy = malloc(ft_strlen(s) + 1);
	if (!s_cpy)
		return (0);
	i = 0;
	while (s[i])
	{
		s_cpy[i] = f(i, s[i]);
		i++;
	}
	return (s_cpy);
}

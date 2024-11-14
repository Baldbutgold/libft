/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:09:55 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/11/11 11:20:12 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;

	start = 0;
	while (set[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str) - 1;
	while (end != 0 && ft_strchr(set, str[end]))
		end--;
	trimmed_str = malloc(end - start + 2);
	if (!trimmed_str)
		return (0);
	ft_memcpy(trimmed_str, (void *)str + start, end - start + 1);
	return (trimmed_str);
}

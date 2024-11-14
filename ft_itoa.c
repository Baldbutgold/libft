/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:24 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/26 14:22:24 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_digit(int n)
{
	int	tracker;

	tracker = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		tracker++;
	}
	return (tracker);
}

char	*ft_handle_negative(int n, int i, char *num)
{
	if (n < 0)
	{
		n = n * (-1);
		num[0] = '-';
		num[i + 1] = '\0';
		while (i >= 1)
		{
			num[i--] = (n % 10) + 48;
			n = n / 10;
		}
	}
	return (num);
}

char	*ft_handle_positive(int n, int i, char *num)
{
	num[i] = '\0';
	while (i >= 0)
	{
		num[--i] = (n % 10) + 48;
		n = n / 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*num;

	i = calc_digit(n);
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	else if (n < 0)
	{
		num = malloc(i + 2);
		if (!num)
			return (0);
		ft_handle_negative(n, i, num);
	}
	else
	{
		num = malloc(i + 1);
		if (!num)
			return (0);
		ft_handle_positive(n, i, num);
	}
	return (num);
}

/*int	main()*/
/*{*/
/*	printf("%s", ft_itoa(-2147483648));*/
/*}*/

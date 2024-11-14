/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:49:51 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/22 17:17:58 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main()
{
	printf("%c", ft_toupper('a'));
	printf("%c", ft_toupper('z'));
	printf("%c", ft_toupper('A'));
	printf("%c", ft_toupper('Z'));
	printf("%c", ft_toupper('1'));
	printf("%c", ft_toupper('0'));
}*/

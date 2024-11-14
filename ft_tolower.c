/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:23 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/22 17:17:25 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int	main()
{
	printf("%c", ft_tolower('a'));
	printf("%c", ft_tolower('z'));
	printf("%c", ft_tolower('A'));
	printf("%c", ft_tolower('Z'));
	printf("%c", ft_tolower('1'));
	printf("%c", ft_tolower('0'));
}*/

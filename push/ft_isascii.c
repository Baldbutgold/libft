/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:20:43 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/22 18:20:44 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_isascii(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        0, 31, 32, 48, 65, 90, 97, 122, */
/*        127, 128, 255, 'A', 'z', '0', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_isascii:\n");*/
/*    printf("%-10s %-10s %-10s\n", */
/*           "Input", "isascii", "ft_isascii");*/
/*    printf("------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = isascii(c) != 0, */
/*            actual = ft_isascii(c);*/
/*        printf("%-10d %-10d %-10d\n", */
/*               c, expected, actual);*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

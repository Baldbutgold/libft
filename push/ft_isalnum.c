/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:23:55 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/23 14:32:14 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_isalnum(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        'A', 'Z', 'a', 'z', '0', '9', '!', '@', */
/*        '[', '`', ' ', '\t', '\n', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_isalnum:\n");*/
/*    printf("%-10s %-10s %-10s\n", */
/*           "Input", "isalnum", "ft_isalnum");*/
/*    printf("------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = isalnum(c) != 0, */
/*            actual = ft_isalnum(c);*/
/*        printf("%-10c %-10d %-10d\n", */
/*               (c >= 32 && c <= 126) ? c : '?', */
/*               expected, actual);*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

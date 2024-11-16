/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:49:24 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/22 18:58:59 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_isdigit(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        '0', '1', '5', '9', 'A', 'z', '!', '@', */
/*        '[', '`', ' ', '\t', '\n', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_isdigit:\n");*/
/*    printf("%-10s %-10s %-10s\n", */
/*           "Input", "isdigit", "ft_isdigit");*/
/*    printf("------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = isdigit(c) != 0, */
/*            actual = ft_isdigit(c);*/
/*        printf("%-10c %-10d %-10d\n", */
/*               (c >= 32 && c <= 126) ? c : '?', */
/*               expected, actual);*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:48:31 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/22 18:21:10 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_isalpha(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        'A', 'Z', 'a', 'z', '0', '9', '!', '@', */
/*        '[', '`', ' ', '\t', '\n', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_isalpha:\n");*/
/*    printf("%-10s %-10s %-10s\n", */
/*           "Input", "isalpha", "ft_isalpha");*/
/*    printf("------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = isalpha(c) != 0, */
/*            actual = ft_isalpha(c);*/
/*        printf("%-10c %-10d %-10d\n", */
/*               (c >= 32 && c <= 126) ? c : '?', */
/*               expected, actual);*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

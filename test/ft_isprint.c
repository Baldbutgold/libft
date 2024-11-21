/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:39:25 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/22 14:51:01 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	return (0);
}
/**/
/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_isprint(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        31, 32, 48, 65, 90, 97, 122, */
/*        126, 127, 'A', 'z', '0', '!', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_isprint:\n");*/
/*    printf("%-10s %-10s %-10s\n", */
/*           "Input", "isprint", "ft_isprint");*/
/*    printf("------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = isprint(c) != 0, */
/*            actual = ft_isprint(c);*/
/*        printf("%-10c %-10d %-10d\n", */
/*               (c >= 32 && c <= 126) ? c : '?', */
/*               expected, actual);*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

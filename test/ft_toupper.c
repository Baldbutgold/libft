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

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_toupper(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        'a', 'z', 'A', 'Z', '0', '9', '!', '@', */
/*        '[', '`', ' ', '\t', '\n', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_toupper:\n");*/
/*    printf("%-10s %-10s %-10s %-10s\n", */
/*           "Input", "toupper", "ft_toupper", "Result");*/
/*    printf("--------------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = toupper(c), */
/*            actual = ft_toupper(c);*/
/*        printf("%-10c %-10c %-10c %-10s\n", */
/*               (c >= 32 && c <= 126) ? c : '?', */
/*               (expected >= 32 && expected <= 126) ? expected : '?', */
/*               (actual >= 32 && actual <= 126) ? actual : '?', */
/*               (expected == actual) ? "PASS" : "FAIL");*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

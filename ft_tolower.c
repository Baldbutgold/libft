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

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*#include <stdio.h>*/
/*#include <ctype.h>*/
/**/
/*int ft_tolower(int c);*/
/**/
/*int main() {*/
/*    int test_cases[] = { */
/*        'A', 'Z', 'a', 'z', '0', '9', '!', '@', */
/*        '[', '`', ' ', '\t', '\n', EOF */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/**/
/*    printf("Testing ft_tolower:\n");*/
/*    printf("%-10s %-10s %-10s %-10s\n", */
/*           "Input", "tolower", "ft_tolower", "Result");*/
/*    printf("--------------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        int c = test_cases[i], */
/*            expected = tolower(c), */
/*            actual = ft_tolower(c);*/
/*        printf("%-10c %-10c %-10c %-10s\n", */
/*               (c >= 32 && c <= 126) ? c : '?', */
/*               (expected >= 32 && expected <= 126) ? expected : '?', */
/*               (actual >= 32 && actual <= 126) ? actual : '?', */
/*               (expected == actual) ? "PASS" : "FAIL");*/
/*    }*/
/**/
/*    return 0;*/
/*}*/

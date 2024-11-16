/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:25:40 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/23 14:32:50 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
		((char *)s)[--n] = c;
	return (s);
}
/*#include <stdio.h>*/
/*#include <string.h>*/
/**/
/*void *ft_memset(void *b, int c, size_t len);*/
/**/
/*int main() {*/
/*    char test_cases[][20] = { */
/*        "Hello, World!", "Test String", "", */
/*        "1234567890", "ABCDEF" */
/*    };*/
/*    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);*/
/*    int char_to_fill = '*';*/
/*    size_t fill_lengths[] = { 0, 5, 10, 19, 20 };*/
/**/
/*    char empty_array[20] = "";*/
/*    char full_array[20] = "Edge Case Array!";*/
/*    printf("Testing ft_memset:\n");*/
/*    printf("%-20s %-20s %-10s\n", */
/*           "Original", "ft_memset", "Result");*/
/*    printf("--------------------------------------------\n");*/
/**/
/*    for (int i = 0; i < num_tests; i++) {*/
/*        for (int j = 0; j < sizeof(fill_lengths) 
 *        / sizeof(fill_lengths[0]); j++) {*/
/*            size_t fill_len = fill_lengths[j];*/
/*            char standard[20], custom[20];*/
/**/
/*            strcpy(standard, test_cases[i]);*/
/*            strcpy(custom, test_cases[i]);*/
/**/
/*            memset(standard, char_to_fill, fill_len);*/
/*            ft_memset(custom, char_to_fill, fill_len);*/
/**/
/*            printf("%-20s %-20s %-10s\n", */
/*                   standard, custom, */
/*                   (strcmp(standard, custom) == 0) ? "PASS" : "FAIL");*/
/*        }*/
/*    }*/
/**/
/*    memset(empty_array, char_to_fill, 10);*/
/*    ft_memset(empty_array, char_to_fill, 10);*/
/*    printf("%-20s %-20s %-10s\n", */
/*           empty_array, empty_array, */
/*           "PASS (Empty Array)");*/
/**/
/*    memset(full_array, char_to_fill, sizeof(full_array));*/
/*    ft_memset(full_array, char_to_fill, sizeof(full_array));*/
/*    printf("%-20s %-20s %-10s\n", */
/*           full_array, full_array, */
/*           "PASS (Full Fill)");*/
/**/
/*    char *null_ptr = NULL;*/
/*    printf("Testing null pointer:\n");*/
/*    memset(null_ptr, char_to_fill, 10);*/
/*    ft_memset(null_ptr, char_to_fill, 10);*/
/**/
/*    return 0;*/
/*}*/

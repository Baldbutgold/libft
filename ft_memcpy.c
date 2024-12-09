/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:58:01 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/24 15:48:20 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/**/
/*#include <stdio.h>*/
/*#include <string.h>*/
/*#include <stdlib.h>*/
/**/
/*// Function prototype*/
/*void *ft_memcpy(void *dest, const void *src, size_t n);*/
/**/
/*// Helper function to print memory in hexadecimal*/
/*void print_memory(const void *mem, size_t n) {*/
/*    const unsigned char *bytes = (const unsigned char *)mem;*/
/*    for (size_t i = 0; i < n; i++) {*/
/*        printf("%02x ", bytes[i]);*/
/*    }*/
/*    printf("\n");*/
/*}*/
/**/
/*void test_ft_memcpy() {*/
/*    printf("Testing ft_memcpy:\n");*/
/**/
/*    // Test 1: Regular copy*/
/*    char src1[] = "Hello, World!";*/
/*    char dest1_std[20], dest1_ft[20];*/
/*    memcpy(dest1_std, src1, strlen(src1) + 1);*/
/*    ft_memcpy(dest1_ft, src1, strlen(src1) + 1);*/
/*    printf("Test 1 - Regular copy:\n");*/
/*    printf("Standard: %s\nCustom:   %s\nMatch:    %s\n\n",*/
/**/
/*    // Test 2: Copy zero bytes*/
/*    char src2[] = "Test";*/
/*    char dest2_std[5] = "XXXX", dest2_ft[5] = "XXXX";*/
/*    memcpy(dest2_std, src2, 0);*/
/*    ft_memcpy(dest2_ft, src2, 0);*/
/*    printf("Test 2 - Copy zero bytes:\n");*/
/*    printf("Standard: %s\nCustom:   %s\nMatch:    %s\n\n",*/
/**/
/*    // Test 3: Copy large data*/
/*    size_t large_size = 1024 * 1024; // 1 MB*/
/*    char *src3 = malloc(large_size);*/
/*    char *dest3_std = malloc(large_size);*/
/*    char *dest3_ft = malloc(large_size);*/
/*    if (src3 && dest3_std && dest3_ft) {*/
/*        memset(src3, 'A', large_size);*/
/*        memcpy(dest3_std, src3, large_size);*/
/*        ft_memcpy(dest3_ft, src3, large_size);*/
/*        int match = memcmp(dest3_std, dest3_ft, large_size) == 0;*/
/*        printf("Test 3 - Copy large data (1 MB):\n");*/
/*        printf("Match: %s\n\n", match ? "PASS" : "FAIL");*/
/*        free(src3);*/
/*        free(dest3_std);*/
/*        free(dest3_ft);*/
/*    } else {*/
/*        printf("Test 3 - Memory allocation failed.\n\n");*/
/*    }*/
/*}*/
/**/
/*int main() {*/
/*    test_ft_memcpy();*/
/*    return 0;*/
/*}*/

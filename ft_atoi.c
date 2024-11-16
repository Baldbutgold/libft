/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:44:00 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/27 11:44:01 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num = (num * 10) + (nptr[i] - 48);
		i++;
	}
	return (num * sign);
}
int main() {
    // Test cases
    char* inputs[] = {
        "123",       "-123",       "   42",    "42abc",   "abc123", 
        "2147483648", "-2147483649", "",        "   ",     "000123"
    };
    
    int cted_values[] = {
        123,         -123,         42,         42,         0,
        INT_MAX,     INT_MIN,      0,          0,          123
    };

    for (int i = 0; i < 10; i++) {
        char* input = inputs[i];
        
        // Run the custom ft_atoi function
        int result_ft_atoi = ft_atoi(input);

        // Run the built-in atoi function
        int result_builtin_atoi = atoi(input);
        
        // Print results for comparison
        printf("Input: '%s'\n", input);
        printf("ft_atoi Result: %d\n", result_ft_atoi);
        printf("atoi Result:    %d\n", result_builtin_atoi);
        printf("Match: %s\n\n", result_ft_atoi == result_builtin_atoi ? "Yes" : "No");
    }

    return 0;
}

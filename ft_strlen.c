/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 06:01:24 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/08/10 06:01:44 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
void test_strlen(const char *s, const char *test_name)
{
    size_t std_len;
    size_t ft_len;

    std_len = strlen(s);
    ft_len = ft_strlen(s);

    printf("--- Test Case: %s ---\n", test_name);
    printf("String: \"%s\"\n", s);
    printf("  Standard strlen: %zu\n", std_len);
    printf("  Your ft_strlen : %zu\n", ft_len);
    if (std_len == ft_len)
        printf("  Result: PASSED\n");
    else
        printf("  Result: FAILED (Expected %zu, Got %zu)\n", std_len, ft_len);
    printf("\n");
}

int main(void)
{
    printf("--- Testing ft_strlen function ---\n\n");

    // Test cases
    test_strlen("Hello, World!", "Basic string");
    test_strlen("", "Empty string");
    test_strlen("a", "Single character");
    test_strlen("12345", "Digits only");
    test_strlen("  leading and trailing spaces  ", "String with spaces");
    test_strlen("!@#$%^&*()_+-=", "Special characters");
    test_strlen("Long string with many characters to test if it handles
    longer lengths correctly.", "Long string");

    printf("--- End of ft_strlen tests ---\n");

    return 0;
}*/

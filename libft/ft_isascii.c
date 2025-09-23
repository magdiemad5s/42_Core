/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 04:13:42 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/04 03:32:29 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
//#include <stdio.h> // For printf
//#include <ctype.h> // For the standard isascii to compare against
void	test_char(int c)
{
	// Cast to char for printing, but pass int to functions as per ctype.h
	printf("Char: '%c' (Dec: %d, Hex: 0x%X)\n", (char)c, c, c);
	printf("  Standard isascii: %d\n", isascii(c));
	printf("  Your ft_isascii : %d\n", ft_isascii(c));
	printf("---\n");
}

int	main(void)
{
	printf("--- Testing isascii function ---\n\n");
	// Test cases for common ASCII characters
	printf("--- Common ASCII Characters (0-127) ---\n");
	test_char('A');    // Uppercase letter
	test_char('z');    // Lowercase letter
	test_char('0');    // Digit
	test_char('9');    // Digit
	test_char(' ');    // Space
	test_char('!');    // Punctuation
	test_char('$');    // Symbol
	test_char('\n');   // Newline (non-printable control character)
	test_char('\t');   // Tab (non-printable control character)
	test_char(0);      // Null character (NUL)
	test_char(127);    // Delete character (DEL)
	// Test cases for characters outside the standard ASCII range (0-127)
	printf("\n--- Characters Outside ASCII Range (>127) ---\n");
	// The key is their integer value relative to 0-127.
	test_char(128);    // First non-ASCII character
	test_char(200);    // Another non-ASCII character
	test_char(255);    // Last byte value
	test_char(-1);     // EOF or other negative value (char promoted to int)
	printf("\n--- End of tests ---\n");
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 04:13:42 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/04 03:33:02 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> // For printf
//#include <ctype.h> // For the standard isprint to compare against
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
void test_char(int c)
{
    printf("Char: '%c' (Dec: %d, Hex: 0x%X)\n", (char)c, c, c);
    printf("  Standard isprint: %d\n", isprint(c));
    printf("  Your ft_isprint : %d\n", ft_isprint(c));
    printf("---\n");
}
int main(void)
{
    printf("--- Testing isprint function ---\n\n");

    // Printable ASCII characters (32 to 126)
    printf("--- Printable ASCII Characters ---\n");
    test_char(' ');    // Space
    test_char('!');    // Exclamation mark
    test_char('0');    // Digit
    test_char('A');    // Uppercase letter
    test_char('z');    // Lowercase letter
    test_char('~');    // Tilde (last printable ASCII)

    // Non-printable ASCII characters
    printf("\n--- Non-Printable ASCII Characters ---\n");
    test_char(0);      // Null character (NUL)
    test_char(7);      // Bell character (BEL)
    test_char('\n');   // Newline
    test_char('\t');   // Tab
    test_char(27);     // Escape character (ESC)
    test_char(127);    // Delete character (DEL)

    // Characters outside ASCII range (>127) - typically not printable by isprint
    printf("\n--- Characters Outside ASCII Range ---\n");
    test_char(128);
    test_char(200);
    test_char(255);
    test_char(-1);     // EOF or other negative value

    printf("\n--- End of tests ---\n");
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:41:25 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/08/10 00:37:30 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<ctype.h>
#include "libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9' )
		return (2048);
	else
		return (0);
}
/*
int main(void)
{
    printf("%d\n", isdigit('c')); // Use %d for an integer
    printf("%d\n", isdigit('6')); // Example with a non-alpha character
    printf("%d\n", isdigit('1')); // Example with a non-alpha character
    printf("%d\n", isdigit('A')); // Example with another alpha character


    printf("%d\n", ft_isdigit('c')); // Use %d for an integer
    printf("%d\n", ft_isdigit('6')); // Example with a non-alpha character
    printf("%d\n", ft_isdigit('A')); // Example with another alpha character
    return 0; // Good practice to return 0 from main
}
*/

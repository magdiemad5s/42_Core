/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:41:25 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/04 06:31:11 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	else
		return (0);
}

//#include<stdio.h>
//#include<ctype.h>
/*
int	main(void)
{
	printf("%d\n", isalpha('c')); // Use %d for an integer
	printf("%d\n", isalpha('5')); // Example with a non-alpha character
	printf("%d\n", isalpha('A')); // Example with another alpha character
	printf("%d\n", ft_isalpha('c')); // Use %d for an integer
	printf("%d\n", ft_isalpha('5')); // Example with a non-alpha character
	printf("%d\n", ft_isalpha('A')); // Example with another alpha character
	return (0); // Good practice to return 0 from main
}
*/

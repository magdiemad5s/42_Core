/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:41:25 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/04 03:32:54 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
int main(void)
{	
    printf("--- Standard isalnum results ---\n");
    printf("'c': %d\n", isalnum('c'));
    printf("'6': %d\n", isalnum('6'));
    printf("'1': %d\n", isalnum('1'));
    printf("'A': %d\n", isalnum('A'));
    printf("'$': %d\n", isalnum('$')); // Test a non-alphanumeric character

    printf("\n--- ft_isalnum results ---\n");
    printf("'c': %d\n", ft_isalnum('c'));
    printf("'6': %d\n", ft_isalnum('6'));
    printf("'A': %d\n", ft_isalnum('A'));
    printf("'$': %d\n", ft_isalnum('$'));
}*/

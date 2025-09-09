/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 01:29:04 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/09 02:51:25 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n);
// static void	handle_zero(char **result, long int *nbr);

char	*ft_itoa(int n)
{
	long	nb;
	int		length;
	char	*ptr;

	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	length = count_digits(n);
	ptr = malloc(sizeof(char) * length + 1);
	if (!ptr)
		return (NULL);
	ptr[length] = 0;
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		ptr[length - 1] = nb % 10 + 48;
		nb = nb / 10;
		length--;
	}
	return (ptr);
}

static int	count_digits(long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

// static void	handle_zero(char **ptr, long int *nb)
// {
// 	if (*nb == 0)
// 	{
// 		**ptr = '0';
// 		*nb = -*nb;
// 	}
// }

/*
theory of itoa, integer we get it back to ASCII
before we used to /10 and
	%10 to get full numbers in recursion to convert it from ascii to int
now we want to do the reverse,
	for that we have to count exactly how much we need for each num_
_represented by ascii including the negative,
	which should be between 48–57 for digits
*/
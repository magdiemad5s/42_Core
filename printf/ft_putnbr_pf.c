/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:52:07 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/11/19 20:40:44 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *counter)
{
	long	nb;

	nb = num;
	if (nb < 0)
	{
		ft_putchar_pf('-', counter);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		// Recursive call passes the smaller number back in. 
		// Since (nb / 10) fits in int, this is safe.
		ft_putnbr_pf(nb / 10, counter);
		ft_putchar_pf((nb % 10) + '0', counter); 
	}
	else
		ft_putchar_pf(nb + '0', counter);
}
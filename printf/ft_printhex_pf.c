/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:50:50 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/11/19 19:52:30 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned int num, size_t *counter, char *base)
{
	char *strn;

	strn = ft_aux_pf(num, base);
	ft_putstr_pf(strn, counter);
	free(strn);
}
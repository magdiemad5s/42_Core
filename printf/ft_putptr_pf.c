/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:52:11 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/11/19 20:39:44 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	char *strn;
	unsigned long ptr_address;

	ptr_address = (unsigned long)ptr;
	ft_putstr_pf("0x",counter);
	strn = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	ft_putstr_pf(strn,counter);
	free(strn);
}
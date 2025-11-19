/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:51:41 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/11/19 20:43:24 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if(*str == 'c')
		ft_putchar_pf(va_arg(va,int), counter);
	else if(*str == 's')
		ft_putstr_pf(va_arg(va,char *), counter);
	else if(*str == 'p')
		ft_putptr_pf(va_arg(va,void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if(*str == 'u')
			ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar_pf(*str, counter);
}

int ft_printf(const char *strn, ...)
{
	va_list args;
	size_t counter;

	if(!strn)
		return(0);
	counter = 0;
	va_start(args, strn);
	while(*strn)
	{
		if(*strn == '%')
			{
				strn++;
				ft_format(args,(char *)strn,&counter);
			}
		else
			ft_putchar_pf(*strn, &counter);
		strn++;
	}
	va_end(args);
	return(counter);
}

//we pass a string, when we see % we stop, then look for options, and based
// on the option and the arugment provided we do the printing part
// logic: print char until you see %, and based on function continue printing
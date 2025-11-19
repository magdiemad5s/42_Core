/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:55:08 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/11/19 20:38:58 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen_pf(const char *str)
{
	size_t	c;

	if (!str)
		return (0);
	c = 0;
	while (str[c])
		c++;
	return (c);
}

void	ft_bzero_pf(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*p;

	if (number == 0 || size == 0)
	{
		p = malloc(0);
		if (!p)
			return (NULL);
		return (p);
	}
	p = malloc(size * number);
	if (!p)
		return (NULL);
	if (p)
		ft_bzero_pf(p, size * number);
	return (p);
}

//unsigned long long because this function usually used for pointers which are ofter larger than int or long
static size_t	ft_len(unsigned long long n, char *base)
{
	size_t len;
	unsigned long long base_len;

	len = 1;
	base_len = ft_strlen_pf(base);
	while(n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return(len);
}

//pls understand how his work ...

char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	int		num_len;
	int		base_len;

	num_len = ft_len(n,base);
	base_len = ft_strlen_pf(base);
	str = ft_calloc_pf((num_len+1), sizeof(char));
	if(!str)
		return (NULL);
	while (num_len)
	{
		num_len = num_len - 1;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}

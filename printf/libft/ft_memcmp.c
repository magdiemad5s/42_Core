/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:10:26 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/05 22:22:24 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)pt1[i] != (unsigned char)pt2[i])
			return ((unsigned char)pt1[i] - (unsigned char)pt2[i]);
		i++;
	}
	return (0);
}

/*
compare s1 to s2 for n amount of times,
return zero if identical,
	diffrence between first two diffrening byte(unsiged char)
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:17:33 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/05 22:10:14 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// lacks the /0 case where it suppose to segfault
// {
// 	unsigned char *ptr;
// 	ptr = (unsigned char *)s;
// 	while (ptr && n)
// 	{
// 		if (*ptr == (unsigned char)c)
// 			return (ptr);
// 		ptr++;
// 		n--;
// 	}
// 	return (NULL);
// }

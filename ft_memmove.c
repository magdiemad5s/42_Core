/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 06:57:58 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/04 20:33:39 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	src_ptr = (unsigned char *)src;
	dst_ptr = (unsigned char *)dest;
	if (!dst_ptr && !src_ptr)
		return (NULL);
	if (src_ptr > dst_ptr)
		return (ft_memcpy(dst_ptr, src_ptr, n));
	else
	{
		while (n--)
			dst_ptr[n] = src_ptr[n];
	}
	return (dest);
}

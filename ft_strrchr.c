/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 05:30:19 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/09/05 06:23:59 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (len)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)s + len);
	}
	return (NULL);
}

/*
char	*ft_strrchr(const char *s, int c)
{
int		i;

i = (int)ft_strlen(s);
if (!((unsigned char)c))
	return ((char *)&s[i]);
while (i >= 0)
{
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	i--;
}
return (NULL);
}
*/
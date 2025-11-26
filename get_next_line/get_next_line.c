/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-aho <mabu-aho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:47:31 by mabu-aho          #+#    #+#             */
/*   Updated: 2025/11/26 21:59:22 by mabu-aho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free_join(char *stash, char *buffer)
{
	char	*temp;

	if (!stash)
	{
		stash = ft_calloc(1, 1);
		if (!stash)
			return (NULL);
	}
	temp = ft_strjoin(stash, buffer);
	free(stash);
	return (temp);
}

char	*ft_next(char *stash)
{
	int		i;
	int		j;
	char	*next_stash;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	next_stash = ft_calloc((ft_strlen(stash) - i + 1), sizeof(char));
	if (!next_stash)
	{
		free(stash); // STRICT LEAK FIX
		return (NULL);
	}
	i++;
	j = 0;
	while (stash[i])
		next_stash[j++] = stash[i++];
	free(stash);
	return (next_stash);
}

char	*ft_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*read_from_file(int fd, char *stash)
{
	char	*buffer;
	int		bytes_read;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stash = ft_free_join(stash, buffer);
		if (!stash || ft_strchr(stash, '\n'))
			break ;
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_from_file(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_line(stash);
	stash = ft_next(stash);
	return (line);
}
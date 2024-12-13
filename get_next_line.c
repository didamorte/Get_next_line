/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:51:28 by diogribe          #+#    #+#             */
/*   Updated: 2024/12/12 17:25:22 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* aloca a linha ate o \n */
char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] != '\n')
		line[i++] = '\n';
	return (line);
}

/* junta o buffer ao resultado */
char	*ft_free(char *result, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(result, buffer);
	free(result);
	return (temp);
}

/* lê o ficheiro e procura o \n */
char	*ft_file(int fd, char *result)
{
	char	*buffer;
	int		already_read;
	
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));

	already_read = 1;
	while (already_read > 0)
	{
		already_read = read(fd, buffer, BUFFER_SIZE);
		if (already_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[already_read] = 0;
		result = ft_free(result, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (result);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char *buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = ft_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_newline(buffer);
	buffer = ft_next_line(buffer);
	return (line);
}

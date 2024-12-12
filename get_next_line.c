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

char	*ft_file(int fd, char *res)
{
	char	*buffer;
	int		last_byte;
	
	buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	
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
	line = ft_newline();
	buffer = ft_next_line();
	return (line);
}

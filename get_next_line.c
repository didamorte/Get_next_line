/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:51:28 by diogribe          #+#    #+#             */
/*   Updated: 2024/12/09 18:45:07 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		file;
	char	text;

	if (!fd)
		return (NULL);
	file = open(fd, O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (NULL);
	}
	while (read(file, &text, 1) != '\n')
		write(1, &text, 1);
	if (read(file, &text, 1) == '\n')
		write(1, &text, 1);
	close(file);
}

/* int main()
{
	get_next_line('ascii.txt');
} */
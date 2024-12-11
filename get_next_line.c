/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:51:28 by diogribe          #+#    #+#             */
/*   Updated: 2024/12/11 16:44:11 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*line;

	line = NULL;
	ft_lstnew
}

int main() {
	int fd = open("ascii.txt", O_RDONLY);
	if (fd == -1) {
		perror("Erro ao abrir o arquivo");
		return 1;
	}
	char *linha = get_next_line(fd);
	if (linha) {
		printf("Linha lida: %s\n", linha);
		free(linha);  // Não esqueça de liberar a memória alocada
	} else {
		printf("Erro ao ler a linha ou fim do arquivo alcançado\n");
	}
	close(fd);
	return 0;
}
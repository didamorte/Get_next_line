/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:40:26 by diogribe          #+#    #+#             */
/*   Updated: 2024/12/11 16:43:02 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* get next line */
char	*get_next_line(int fd);

/* Lista */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*cria um node(elemento da lista)*/
t_list	*ft_lstnew(void *content);
/*apaga 1 node e todos pra frente*/
void	ft_lstclear(t_list **lst, void (*del)(void *));
/*adiciona um node no fim da linked list*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/*conta o numero de nodes*/
int		ft_lstsize(t_list *lst);
/*retorna o ultimo node da lista*/
t_list	*ft_lstlast(t_list *lst);
/*encontra o \n ou o \0*/
char	*ft_line_finder(int fd, t_list **line);
#endif
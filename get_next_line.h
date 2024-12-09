/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:40:26 by diogribe          #+#    #+#             */
/*   Updated: 2024/12/09 18:50:45 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>

/* get next line */
char	*get_next_line(int fd);
/*procura um caracter numa string*/
char	*ft_strchr(const char *s, int c);
/*duplica uma string alocando memoria pra ela*/
char	*ft_strdup(const char *s);
/*Retorna o tamanho da string*/
size_t	ft_strlen(const char *s);
/*cria uma substring apartir de outra string*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/*concatena s1 e s2 usando malloc*/
char	*ft_strjoin(char const *s1, char const *s2);
#endif
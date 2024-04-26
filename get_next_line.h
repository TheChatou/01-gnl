/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:03:00 by fcoullou          #+#    #+#             */
/*   Updated: 2023/12/21 01:48:28 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

typedef struct s_buf
{
	char	buf[BUFFER_SIZE + 1];
	int		pos;
	int		n_read;
}	t_buf;

char	*get_next_line(int fd);
char	*ft_cat(char *line, t_buf *buf);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strchr(const char *s, int c);
int		init_buf(t_buf *buf, char *line);

#endif
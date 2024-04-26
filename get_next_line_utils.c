/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:03:06 by fcoullou          #+#    #+#             */
/*   Updated: 2023/12/20 19:28:56 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	char			*e;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	e = (char *)src;
	while (i < n)
	{
		d[i] = e[i];
		i++;
	}
	return (d);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (((unsigned char)s[0] == (unsigned char)c) && !s[1])
			return (1);
		if ((unsigned char)s[i] == (unsigned char)c)
			return (i);
		i++;
	}
	if (c == 0)
		return (i);
	return (0);
}

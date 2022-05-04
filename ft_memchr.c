/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:39:16 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/04 11:35:54 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*s2;
	unsigned char	c2;

	x = 0;
	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (x < n)
	{
		if (s2[x] == c2)
			return (s2 + x);
		x++;
	}
	return (NULL);
}

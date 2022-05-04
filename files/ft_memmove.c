/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:58:16 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/04 11:36:30 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			x;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	x = 0;
	if (d < s)
	{
		while (x < len)
		{
			d[x] = s[x];
			x++;
		}
	}
	else if (s < d)
	{
		while (len)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:18:47 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/03 10:28:14 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	x;
	int				y;
	unsigned int	leng_dest;
	unsigned int	leng_src;

	leng_dest = ft_strlen(dst);
	leng_src = ft_strlen(src);
	x = leng_dest;
	y = 0;
	if (dstsize < leng_dest)
		return (dstsize + leng_src);
	if (dstsize == 0)
		return (leng_dest + leng_src);
	while (src[y] && x < (dstsize - 1))
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = 0;
	return (leng_dest + leng_src);
}

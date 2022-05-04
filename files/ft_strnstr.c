/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:16:06 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/04 13:44:04 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_found(char	*str, char	*to_find, size_t x, size_t len)
{
	int	y;

	y = 0;
	while (str[x] == to_find[y] && x < len)
	{
		if (to_find[y + 1] == 0)
			return (1);
		x++;
		y++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;

	if (*needle == 0)
		return ((char *)haystack);
	x = 0;
	while (haystack[x] && x < len)
	{
		if (haystack[x] == needle[0])
		{
			if (ft_found((char *)haystack, (char *)needle, x, len))
				return ((char *)(haystack + x));
		}
		x++;
	}
	return (0);
}

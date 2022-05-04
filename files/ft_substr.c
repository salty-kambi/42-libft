/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:38:45 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/06 16:51:26 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	size_t	x;
	int		y;
	char	*r;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (0);
	x = 0;
	y = 0;
	while (s[x] && x < (len + start))
	{
		if (x >= start && x < (len + start))
		{
			r[y] = s[x];
			y++;
		}
		x++;
	}
	r[y] = 0;
	return (r);
}

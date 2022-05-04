/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:49:46 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/06 11:34:04 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (c == set[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int		start;
	int		len;

	if (!s1)
		return (0);
	len = ft_strlen(s1) - 1;
	start = 0;
	while (ft_checkset(s1[len], set) && len)
		len--;
	while (ft_checkset(s1[start], set) && s1[start])
	{
		if (len > 0)
			len--;
		start++;
	}
	r = ft_substr(s1, start, len + 1);
	if (!r)
		return (0);
	return (r);
}

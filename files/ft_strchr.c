/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:00:09 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/06 16:37:20 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	c1;

	c1 = c;
	x = 0;
	while (s[x])
	{
		if (s[x] == c1)
			return ((char *)(s + x));
		x++;
	}
	if (s[x] == c1)
		return ((char *)(s + x));
	return (NULL);
}

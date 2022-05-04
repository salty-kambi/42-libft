/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:01:13 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/03 12:15:16 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s10;
	unsigned char	*s20;
	int				x;

	x = 0;
	s10 = (unsigned char *)s1;
	s20 = (unsigned char *)s2;
	if (n < 1)
		return (0);
	while ((s10[x] == s20[x]) && n > 0)
	{
		n--;
		if (n > 0)
			x++;
	}
	return (s10[x] - s20[x]);
}

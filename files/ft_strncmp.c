/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:30:55 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/04 13:01:45 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	x;

	x = 0;
	if (n < 1)
		return (0);
	while (s1[x] && s2[x] && (s1[x] == s2[x]) && n > 0)
	{
		n--;
		if (n > 0)
			x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}

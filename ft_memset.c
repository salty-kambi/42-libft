/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:38:25 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/04 11:37:10 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	c2;

	s = (unsigned char *)b;
	c2 = (unsigned char)c;
	while (len)
	{
		len--;
		s[len] = c2;
	}
	return (s);
}

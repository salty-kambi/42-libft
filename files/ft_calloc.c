/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:41:47 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/04 11:34:02 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*r;
	size_t	x;

	x = 0;
	r = malloc(size * count);
	if (!r)
		return (0);
	while (x < (size * count))
	{
		r[x] = 0;
		x++;
	}
	return (r);
}

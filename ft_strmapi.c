/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:18:14 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/06 11:35:39 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		x;
	char	*r;

	if (!s || !f)
		return (0);
	x = 0;
	len = ft_strlen(s) + 1;
	r = malloc(sizeof(char) * len);
	if (!r)
		return (0);
	while (s[x])
	{
		r[x] = f(x, s[x]);
		x++;
	}
	r[x] = 0;
	return (r);
}

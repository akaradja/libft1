/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:04:10 by akaradja          #+#    #+#             */
/*   Updated: 2015/11/29 00:03:20 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == a)
			return (str + i);
		i++;
	}
	return (NULL);
}

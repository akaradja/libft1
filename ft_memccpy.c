/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 22:52:08 by akaradja          #+#    #+#             */
/*   Updated: 2015/11/29 00:07:15 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char*)dst;
	source = (char*)src;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

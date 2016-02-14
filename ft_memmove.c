/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:00:28 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/09 21:50:46 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char*)dst;
	source = (char*)src;
	if (dst <= src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:29:15 by akaradja          #+#    #+#             */
/*   Updated: 2016/01/14 16:56:26 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	dest_len = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
		dest_len++;
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (dest_len + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 20:33:19 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/03 10:08:36 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (i <= size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

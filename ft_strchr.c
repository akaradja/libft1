/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:38:48 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/03 10:36:40 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*str;

	str = (char*)s;
	a = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (str + i);
		i++;
	}
	if (str[i] == c)
		return (str + i);
	return (NULL);
}

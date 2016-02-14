/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 05:21:24 by akaradja          #+#    #+#             */
/*   Updated: 2015/12/01 08:08:38 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		return (NULL);
	str = malloc(len + 1);
	if (str == 0)
		return (NULL);
	while (i < len)
	{
		str[i] = (char)(s[start + i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

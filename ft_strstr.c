/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:55:43 by akaradja          #+#    #+#             */
/*   Updated: 2016/01/14 15:38:32 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(s2) > ft_strlen(s1))
		return (NULL);
	if (s2[0] == 0)
		return ((char*)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}

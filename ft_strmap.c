/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 04:57:34 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/09 21:52:46 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return ((char*)s);
	while (s[i])
		i++;
	if (!(str = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)((char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

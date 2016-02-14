/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 22:33:10 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/15 00:22:40 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_comptage(char const *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		j++;
	}
	while (s[i])
		i++;
	i--;
	while ((i > 0) && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i--;
		j++;
	}
	return (ft_strlen(s) - j);
}

static int	ft_fullblankinput(char const *s)
{
	size_t i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == ft_strlen(s))
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (ft_fullblankinput(s))
		return (ft_strdup(""));
	if (!(str = malloc(ft_comptage(s) + 1)))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < ft_comptage(s))
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 02:28:00 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/09 21:53:14 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mots(char const *s, char c, int i)
{
	int		j;
	char	*mot;

	j = 0;
	while (s[i + j] != c && s[i + j])
		j++;
	if (!(mot = malloc(j + 1)))
		return (NULL);
	j = 0;
	while (s[i] != c && s[i])
	{
		mot[j] = s[i];
		i++;
		j++;
	}
	mot[j] = '\0';
	return (mot);
}

static int	ft_ajustement(char const *s, char c, int i)
{
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int		ft_comptage(char const *s, char c)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && i = 0))
			j++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char*)malloc(sizeof(char*) * ft_comptage(s, c) + 1)))
		return (NULL);
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			tab[j] = ft_mots(s, c, i);
			i = ft_ajustement(s, c, i);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 19:34:21 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/01 09:06:52 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	reduction(const char *str, int resultat, int i)
{
	while (str[i] <= '9' && str[i] >= '0')
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	return (resultat);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		resultat;

	neg = 1;
	i = 0;
	resultat = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
				str[i] == '\v' || str[i] == '\r' || str[i] == '\f') && str[i])
		i++;
	if (str[i] == 45)
	{
		neg = -1;
		i++;
		if (str[i] > 58 || str[i] < 47)
			return (0);
	}
	if (str[i] == 43)
		i++;
	if (str[i] > 58 || str[i] < 47)
		return (0);
	resultat = reduction(str, resultat, i);
	return (resultat * neg);
}

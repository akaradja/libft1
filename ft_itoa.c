/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 02:44:04 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/14 23:40:49 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_combien(int n)
{
	int i;

	i = 0;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

static char	*reduction(char *itoa, unsigned int n, int j)
{
	int i;

	i = 0;
	while (n)
	{
		itoa[j - i] = (char)(n % 10 + 48);
		i++;
		n = n / 10;
	}
	itoa[j + 1] = '\0';
	return (itoa);
}

char		*ft_itoa(int n)
{
	int		j;
	char	*itoa;

	j = ft_combien(n);
	if (!(itoa = malloc(ft_combien(n) + 2)))
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	else
		j--;
	itoa = reduction(itoa, (unsigned int)n, j);
	return (itoa);
}

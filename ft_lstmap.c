/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaradja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 19:12:38 by akaradja          #+#    #+#             */
/*   Updated: 2016/02/09 19:13:21 by akaradja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *resultat;
	t_list *temp;
	t_list *tempo;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	resultat = ft_lstnew(temp->content, temp->content_size);
	tempo = resultat;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		tempo->next = ft_lstnew(temp->content, temp->content_size);
		lst = lst->next;
		tempo = tempo->next;
	}
	return (resultat);
}

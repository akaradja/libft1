#include "libft.h"

void	ft_lstend(t_list **alst, t_list *new)
{
	t_list	*tmp;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

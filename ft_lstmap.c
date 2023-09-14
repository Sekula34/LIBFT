/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:55:49 by fseles            #+#    #+#             */
/*   Updated: 2023/09/14 10:55:53 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_first(t_list *first_old_element, void *(*f)(void *))
{
	t_list	*first_new_element;

	first_new_element = ft_lstnew((*f)(first_old_element->content));
	if (first_new_element == NULL)
		return (NULL);
	return (first_new_element);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**pointer_head;
	t_list	*new_element;
	t_list	*old_element;

	if (lst)
	{
		new_element = create_first(lst, (*f));
		if (new_element == NULL)
			return (NULL);
		pointer_head = &new_element;
		lst = lst->next;
		while (lst != NULL)
		{
			old_element = lst;
			new_element->next = create_first(old_element, (*f));
			if (new_element->next == NULL)
			{
				ft_lstclear(pointer_head, (*del));
				return (NULL);
			}
			lst = lst->next;
		}
		return (*pointer_head);
	}
	return (NULL);
}

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

	first_new_element = malloc(sizeof(t_list)); 
	if(first_new_element == NULL)
		return (NULL);
	first_new_element->content = (*f)(first_old_element->content);
	first_new_element->next = NULL;
	return (first_new_element);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**pointer_head;
	t_list	*new_element;
	if(lst)
	{
		new_element =create_first(lst,(*f));
		pointer_head = &new_element;
		while(lst != NULL)
		{

		}
	}
}

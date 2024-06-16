/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:07:55 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/18 19:06:19 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*lstclear_null(t_list *new_list, void (*del)(void *))
{
	ft_lstclear(&new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	current = NULL;
	new_node = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (lstclear_null(new_list, del));
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (del(new_content), lstclear_null(new_list, del));
		if (!new_list)
			new_list = new_node;
		else
			current->next = new_node;
		current = new_node;
		lst = lst->next;
	}
	return (new_list);
}

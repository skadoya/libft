/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadoya <skadoya@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:59:40 by skadoya           #+#    #+#             */
/*   Updated: 2024/05/18 15:04:19 by skadoya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (lst && *lst && del)
	{
		current = *lst;
		while (current)
		{
			next_node = current->next;
			del(current->content);
			free(current);
			current = next_node;
		}
		*lst = NULL;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:05:47 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:33:05 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new_lst;
	t_list	*new_cell;
	t_list	*new_content;

	curr = lst;
	new_lst = (void *)0;
	if (!lst || !f || !del)
		return ((void *)0);
	while (curr)
	{
		new_content = f(curr->content);
		new_cell = ft_lstnew(new_content);
		if (!new_cell)
		{
			ft_lstclear(&new_lst, del);
			del(new_content);
			return ((void *)0);
		}
		ft_lstadd_back(&new_lst, new_cell);
		curr = curr->next;
	}
	return (new_lst);
}

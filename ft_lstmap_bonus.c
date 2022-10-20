/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:29:14 by yamrire           #+#    #+#             */
/*   Updated: 2022/10/20 23:47:36 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*curr;
	t_list	*aux;
	t_list	*elemt;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	aux = NULL; 
	curr = lst;
	while (curr != NULL)
	{
		content = f(curr->content);
		elemt = ft_lstnew(content);
		if (!elemt)
		{
			del(content);
			ft_lstdelone(elemt, del);
			ft_lstclear(&aux, del);
			return (NULL);
		}
		ft_lstadd_back(&aux, elemt);
		curr = curr->next;
	}
	
	return (aux);
}
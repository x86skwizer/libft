/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:29:14 by yamrire           #+#    #+#             */
/*   Updated: 2022/10/14 00:00:54 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*curr;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	curr = lst;
	ft_lstiter(curr, f(curr->content));
	while (curr != NULL)
	{
		aux = ft_lstnew(curr->content);
		aux->next = malloc(sizeof(t_list *));
		if (!aux->next)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		} 
		curr = curr->next;
	}
	return (aux);
}
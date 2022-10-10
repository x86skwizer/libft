/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:29:14 by yamrire           #+#    #+#             */
/*   Updated: 2022/10/10 02:11:58 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*curr;
	t_list	*aux;

	curr = lst;
	while (curr != NULL)
	{
		aux = curr;
		aux->content = f(curr->content);
		aux->next = malloc(sizeof(t_list *));
		if (!aux->next)
		{
			del(aux->content);
			aux->next = NULL;
			return (NULL);
		}
		curr = curr->next;
	}
	return (aux);
}
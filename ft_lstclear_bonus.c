/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:15:58 by yamrire           #+#    #+#             */
/*   Updated: 2022/10/10 01:17:41 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*aux;

	curr = *lst;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		del(aux->content);
		free(aux);
	}
	*lst = NULL;
}
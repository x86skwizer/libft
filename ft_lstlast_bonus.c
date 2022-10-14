/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:16:19 by yamrire           #+#    #+#             */
/*   Updated: 2022/10/11 00:50:17 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;
	t_list	*aux;

	curr = lst;
	if (curr == NULL)
		return (NULL);
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
	}
	return (aux);
	
}
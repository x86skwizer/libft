/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:39:52 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:32:19 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			num;
	char			*str;
	unsigned char	alpha;

	str = (char *)b;
	alpha = (unsigned char)c;
	num = 0;
	while (num < len)
		str[num++] = alpha;
	return (str);
}

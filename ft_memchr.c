/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:22:16 by yamrire           #+#    #+#             */
/*   Updated: 2022/09/25 11:40:10 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	alpha;
	size_t			num;

	if (n == 0)
		return (NULL);
	str = (unsigned char *)s;
	alpha = (unsigned char) c;
	num = 0;
	while (num < n)
	{
		if (str[num] == alpha)
			return (&str[num]);
		num++;
	}
	if (alpha == '\0' && str[num] == '\0')
		return (&str[num]);
	return (0);
}

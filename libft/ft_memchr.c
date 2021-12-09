/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:22:16 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/09 02:14:20 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	while (str[num] != '\0' && num < n)
	{
		if (str[num] == alpha)
			return (&str[num]);
		num++;
	}
	return (0);
}

int main()
{
    
    printf("%s\n", (char *)ft_memchr("yassine", 's', 3));
    return 0;
}

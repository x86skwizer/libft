/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:20:02 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 22:22:33 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dtsize)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	len = 0;
	while (len < dtsize - 1)
	{
		dst[len] = src[len];
		len++;
	}
	return (ft_strlen(src));
}

/* int main(int ac , char **av)
{
    char dest[15] ;

    printf("%lu\n", ft_strlcpy(dest, "0123456789", 5));
    printf("%s\n", dest);
}*/

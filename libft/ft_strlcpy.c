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

	len = 0;
	if (dtsize > 0)
	{
		while (src[len] && len < dtsize - 1)
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (ft_strlen(src));
}

/* int main(int ac , char **av)
{
    char dest[15] ;

    printf("%lu\n", ft_strlcpy(dest, "0123456789", 5));
    printf("%s\n", dest);
}*/

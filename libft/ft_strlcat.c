/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:17:08 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/05 02:19:13 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(dst);
	dstsize = dstsize + len;
	while (len < dstsize - 1)
	{
		dst[len] = src[0];
		len++;
		src++;
	}
	return (ft_strlen(dst));
}

/*int	main()
{
	char dest[15] = "5678" ;

    printf("%lu\n", ft_strlcat(dest, "0123456789", 5));
    printf("%s\n", dest);
	return 0;
}*/

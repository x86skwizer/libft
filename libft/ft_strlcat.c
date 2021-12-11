/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:17:08 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 16:56:02 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
// size - strlen(dst) - 1;

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize) {
	size_t len;

	size_t lendst = ft_strlen (dst);
	if ( lendst >= dstsize)
		len = dstsize;
	else
		len = lendst;
	if (len == dstsize)
		return (len + ft_strlen (src));
	return len + ft_strlcpy (dst + lendst, src, dstsize - lendst);	
}
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	len;
// 	size_t	i;
// 	size_t	len_dst;

// 	len = ft_strlen(dst);
// 	len_dst = len + ft_strlen (src);
// 	dstsize -= len;
// 	dstsize -= 1;
// 	i = 0;

// 	while (src[i] && i < dstsize)
// 	{
// 		dst[len + i] = src[i];
// 		i++;
// 	}
// 	dst[len + i] = '\0';
// 	return (len_dst);
// }

// int	main()
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	size_t r1 = __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
// 	size_t r2 = ft_strlcat(buff2, str, max);
// 	printf("%lu\n", max);
// 	printf("strlcat    : |%s|\n", buff1);
// 	printf("ft_strlcat : |%s|\n", buff2);
// 	printf("strlcat    : %lu\n", r1);
// 	printf("ft_strlcat : %lu\n", r2);
// 	if (r1 != r2)
// 	{
// 		printf("TEST_FAILED");
// 		return (0);
// 	}
// 	printf("TEST_S");
// 	return (0);
// 	/*char s1[4] = "";
// 	char s2[4] = "";
// 	r1 = __builtin___strlcat_chk (s1, "thx to ntoniolo for this test !", 4, __builtin_object_size (s1, 2 > 1 ? 1 : 0))
// 		;
// 	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4)
// 		;
// 	if (r1 != r2)
// 		exit(TEST_FAILED);
// 	exit(TEST_SUCCESS);*/
// }

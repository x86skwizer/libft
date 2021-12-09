/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:27:38 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:30:28 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	len;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	len = 0;
	while (str1[len] == str2[len] && len < n)
			len++;
	len--;
	return (str1[len] - str2[len]);
}


int	main ()
{
	char *s1 = "\xff\xaa\xde\x12WXYZ";
	char *s2 = "\xff\xaa\xde\x12MACOSX";
	size_t size = 7;
	int i1 = (memcmp(s1, s2, size));
	int i2 = (ft_memcmp(s1, s2, size));
	printf("memcmp : %d\n", i1);
	printf("ft_memcmp : %d\n", i2);

}
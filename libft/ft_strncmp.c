/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:34:00 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/10 18:24:58 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!str1 && !str2)
		return (0);
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0') && (i + 1) < n)
		i++;
	return (str1[i] - str2[i]);
}

// int main()
// {
//     char *big = "abcdef";
// 	char *little = "abcdefghijklmnop";
// 	size_t size = 6;
// 	int i1 = ((strncmp(big, little, size) > 0) ? 1 : ((strncmp(big, little, size) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(big, little, size) > 0) ? 1 : ((ft_strncmp(big, little, size) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 	{
// 		printf("success\n");
// 		return (0);
// 	}
// 	printf("failed\n");
// 	return (0);

// }

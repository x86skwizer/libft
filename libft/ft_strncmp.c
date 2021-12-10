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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}

/*int main()
{
    printf("%d\n", ft_strncmp("Yassine", "Yassine", 0));
    printf("%d\n", strncmp("Yassine", "Yassine", 0));
    return (0);
}*/

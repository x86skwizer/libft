/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:36:45 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/12 00:55:34 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *) haystack;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (str[i] != '\0' && j < len)
	{
		while (str[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

/*int main()
{
    char *largestring = "Bazz Bar Baz";
	char *smallstring = "Bar";

	printf("%s\n", strnstr(largestring, smallstring, 10));
	printf("%s\n", ft_strnstr(largestring, smallstring, 10));
    return (0);
}*/

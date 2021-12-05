/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:36:45 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/05 02:38:31 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	str = (char *) haystack;
	while (str[i] != '\0' && j < len)
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
    char *largestring = "Bazz Bar Baz";
	char *smallstring = "Bar";

	printf("%s\n", strnstr(largestring, smallstring, 10));
	printf("%s\n", ft_strnstr(largestring, smallstring, 10));
    return (0);
}*/

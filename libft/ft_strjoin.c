/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:16:47 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/05 00:20:07 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len;
	size_t	count1;
	size_t	count2;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	len1 = ft_strlen(s1);
	count1 = 0;
	while (count1 < len1)
		str[count1++] = s1[count1++];
	count2 = 0;
	while (count1 < len)
		str[count1++] = s2[count2++];
	str[count1] = '\0';
	return (str);
}

/*int	main()
{
	char str1[] = "Yassine ";
	char str2[] = "Amrire";
	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}*/

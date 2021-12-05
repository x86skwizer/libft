/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:39:19 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/05 02:41:22 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	char	alpha;
	char	*str;
	size_t	num;

	alpha = (char) c;
	str = (char *) s;
	if (!str)
		return (0);
	num = ft_strlen(str);
	while (num > 0)
	{
		if (str[num] == alpha)
			return (&str[num]);
		num--;
	}
	if (c == '\0')
		return ("\0");
	return (NULL);
}

/*int main()
{
    printf("%s\n", ft_strrchr(" Yassine", 's'));
    printf("%s\n",strrchr(" Yassine", 's'));
    return (0);
}*/

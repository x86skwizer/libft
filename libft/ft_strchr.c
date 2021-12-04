/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:07:30 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/05 00:11:34 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	alpha;
	int		num;
	char	*s;

	s = (char *)str;
	alpha = (char) c;
	if (!s)
		return (0);
	num = 0;
	while (s[num] != '\0')
	{
		if (s[num] == alpha)
			return (&s[num]);
		num++;
	}
	if (c == '\0')
		return ("\0");
	return (NULL);
}

// int main()
// {
//     printf("%s\n", ft_strchr(" Yas sine     ", ' '));
//     printf("%s\n",strchr(" Yas sine      ", ' '));
//     return (0);
// }

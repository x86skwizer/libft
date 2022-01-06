/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <yamrire@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:39:19 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/10 05:05:47 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	alpha;
	char	*str;
	size_t	num;

	alpha = (char) c;
	str = (char *) s;
	num = ft_strlen(str);
	if (alpha == '\0')
		return (&str[num]);
	while (num-- > 0)
	{
		if (str[num] == alpha)
			return (&str[num]);
	}
	return (NULL);
}

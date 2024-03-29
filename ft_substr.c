/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:43:37 by yamrire           #+#    #+#             */
/*   Updated: 2022/10/23 01:51:34 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	num;

	if (!s)
		return (NULL);
	
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	str = (char *) ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	num = 0;
	while (num < len)
	{
		str[num] = s[start + num];
		num++;
	}
	str[num] = '\0';
	return (str);
}

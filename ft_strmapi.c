/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <yamrire@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:26:37 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/12 04:26:40 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	num;

	num = 0;
	if (!s || !f)
		return (NULL);
	ptr = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[num] != '\0')
	{
		ptr[num] = f(num, s[num]);
		num++;
	}
	ptr[num] = '\0';
	return (ptr);
}

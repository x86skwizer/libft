/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:34:00 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 17:00:19 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n && s1[i] == s2[i])
		i++;
	if (s1[i] - s2[i] < 0)
		return (-1);
	else if (s1[i] - s2[i] > 0)
		return (1);
	else
		return (0);
}

/*int main()
{
    printf("%d\n", ft_strncmp("Yassine", "Yassine", 0));
    printf("%d\n", strncmp("Yassine", "Yassine", 0));
    return (0);
}*/

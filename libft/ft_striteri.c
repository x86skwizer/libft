/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:14:42 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 16:54:33 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}

// void ff(unsigned int i, char *s) {
// 	(void)i;
// 	*s = ft_toupper(*s);
// }

// int main () {
// 	char str[] = "hello there rhekr eljrlj 64646";

// 	ft_striteri (str, &ff);
// 	printf("%s\n", str);
// }
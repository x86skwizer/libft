/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:28:10 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:25:38 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 32 && a <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
    int str = ' ';
    printf("isprint    : |%d|\n", isprint(str));
    printf("ft_isprint : |%d|\n", ft_isprint(str));
    return (0);
}*/

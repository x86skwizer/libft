/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:24:57 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:23:37 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	else
		return (0);
}

/*int main()
{
    char str = '}';
    printf("isascii    : |%d|\n", isascii(str));
    printf("ft_isascii : |%d|\n", ft_isascii(str));
    return (0);
}*/

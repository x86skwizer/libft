/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:26:48 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/04 22:27:30 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int main()
{
    int str = '1';
    printf("isdigit    : |%d|\n", isdigit(str));
    printf("ft_isdigit : |%d|\n", ft_isdigit(str));
    return (0);
}*/

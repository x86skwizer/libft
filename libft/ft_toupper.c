/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 03:15:17 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/06 03:20:15 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	unsigned char	car;

	car = (unsigned char)c;
	if (!car)
		return (0);
	else if (car >= 97 && car <= 122)
		car -= 32;
	return ((int)car);
}

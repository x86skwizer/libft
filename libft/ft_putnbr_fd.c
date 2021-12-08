/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:44:51 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:33:46 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;

	m = n;
	if (m < 0)
	{
		m = -m;
		ft_putchar_fd('-', fd);
	}
	if (m / 10)
		ft_putnbr_fd (m / 10, fd);
	ft_putchar_fd (m % 10 + '0', fd);
}

// int main()
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// }

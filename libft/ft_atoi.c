/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:53:01 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/04 22:14:08 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	ft_atoi(const char *str)
{
	char	*src;
	int	num;
	int	sign;

	src = (char *) str;
	num = 0;
	if (!src)
		return (num);
	while (ft_strchr(" \n\f\r\t\v", *src))
		src++;
	sign = 1;
	if (*src == '-')
	{
		sign = -1;
		src++;
	}
	else if (*src == '+')
		src++;
	while (*src >= '0' && *src <= '9')
	{
		num = num * 10 + (*src - 48);
		src++;
	}
	return (num * sign);
}

int	main()
{
	printf("%d\n", ft_atoi("5896"));
	return 0;
}

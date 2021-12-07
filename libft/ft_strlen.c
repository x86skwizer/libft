/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:23:44 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 16:58:38 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	num;

	num = 0;
	while (str[num] != '\0')
		num++;
	return (num);
}

/* int	main()
{
	char str[] = "Yassine";
	printf("strlen    = |%lu|\n", strlen(str));
	printf("ft_strlen = |%lu|\n", strlen(str));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:30:11 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:29:12 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int		len;
	long	num;

	len = 0;
	if (n == 0)
		return (1);
	num = n;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	num;
	size_t	len;

	len = count_len(n);
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (n == 0)
			ptr[0] = '0';
	num = n;
	if (num < 0)
	{
		num *= -1;
		ptr[0] = '-';
	}
	ptr[len] = '\0';
	len--;
	while (num != 0)
	{
		ptr[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (ptr);
}

/*int	main()
{
	int num = 0;
	printf("%s\n", ft_itoa(num));
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:16:59 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:21:38 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}

/*int	main()
{
	char str[] = "Yassine";

	int	intd;
	intd = 0;
	// while (intd < 4)
	// {
	// 	printf(":>%s\n", arr[intd]);
	// 	intd++;
	// }

	ft_bzero(str, 4 * sizeof(char));
	intd = 0;
	printf("test :>%s\n", str);
	printf("test :>%s\n", str + 4);

	// while (intd < 4)
	// {
	// 	printf("test :>%d\n", arr[intd]);
	// 	intd++;
	// }
	
	return (0);
}*/

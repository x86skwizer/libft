/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 03:12:20 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 17:10:22 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	a;

	a = (unsigned char) c;
	if (!a)
		return (0);
	else if (a >= 65 && a <= 90)
	{
		a += 32;
	}
	return ((int) a);
}

/*int	main()
 {
 	unsigned char car;
 	int a = ft_tolower('A');
 	car = (unsigned char)a;
 	printf("%c", car);
 	return (0);
 }*/

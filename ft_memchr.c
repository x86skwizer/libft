/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <yamrire@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:22:16 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/09 02:14:20 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	alpha;
	size_t			num;

	if (n == 0)
		return (NULL);
	str = (unsigned char *)s;
	alpha = (unsigned char) c;
	num = 0;
	while (num < n)
	{
		if (str[num] == alpha)
			return (&str[num]);
		num++;
	}
	if (alpha == '\0' && str[num] == '\0')
		return (&str[num]);
	return (0);
}

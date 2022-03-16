/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <yamrire@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:39:52 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:32:19 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			num;
	char			*str;
	unsigned char	alpha;

	str = (char *)b;
	alpha = (unsigned char)c;
	num = 0;
	while (num < len)
		str[num++] = alpha;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:17:08 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 16:56:02 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	lendst;

	lendst = ft_strlen (dst);
	if (lendst >= dstsize)
		len = dstsize;
	else
		len = lendst;
	if (len == dstsize)
		return (len + ft_strlen (src));
	return (len + ft_strlcpy (dst + lendst, src, dstsize - lendst));
}

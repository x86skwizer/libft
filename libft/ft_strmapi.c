/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:26:37 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/12 04:26:40 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	num;

	num = 0;
	if (!s)
		return (NULL);
	ptr = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[num] != '\0')
	{
		ptr[num] = f(num, s[num]);
		num++;
	}
	ptr[num] = '\0';
	return (ptr);
}

// char ff (unsigned int i, char c) {
// 	(void)i;
// 	return ft_toupper (c);
// }

// int main () {
// 	char str[] = "hello thrte sljfrlg  dgfg";

// 	char *s = ft_strmapi (str, &ff);
// 	printf("%s\n", s);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:18:03 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 14:22:19 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

/*int    main()
{
    char *str;
	int len;
    len  = 5;
    str = (char *) ft_calloc(len, sizeof(char));
    int i = -1 ;
    while (++i < len)
        str[i] = 'a';
    i = -1;
    printf("Before the loop\n");
    while (++i < len)
        printf("[%d]: %c\n", i, str[i]);
    return (0);

}*/

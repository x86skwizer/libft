/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:48:54 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/07 17:13:23 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	count_words(char const *s, char c)
// {
// 	// size_t	num_c;
// 	int	num_c;
// 	int		i;
// 	num_c = 0;
// 	i = 0;
// 	while (s[i] == c)
// 		i++;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			while (s[i] == c)
// 				i++;
// 			if (s[i] != '\0')
// 				num_c++;
// 		}
// 		i++;
// 	}
// 	return (num_c + 1);
// }

int	count_words(char const *src, char c)
{
	int	n;

	n = 0;
	while (*src == c)
		src++;
	if (*src == '\0')
		return (1);
	while (*src != '\0')
	{
		while (*src && *src != c)
			src++;
		n++;
		while (*src && *src == c)
			src++;
	}
	return (n);
}
/*char **ft_split(char const *s, char c)
{
    char    **tab;
    size_t  i;
    int     j;
    size_t  num_c;
    size_t  remember;

    num_c = count_words(s, c);
    j = 0;
    tab = (char **) malloc((num_c + 1) * sizeof(char *));
    i = 0;
    while (s[i] == c)
        i++;
    remember = i;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        { 
            tab[j] = ft_substr(s, remember, i - remember);
            j++;
            while (s[i] == c)
              i++;
            remember = i;
        }
        i++;
    }
    if(s[remember])
      tab[j] = ft_substr(s, remember, i - remember);
    tab[num_c] = 0;
    return (tab);
}*/

char	**handle(char **tab, int start, size_t j)
{
	int	i;

	if (start == -1)
		tab[j++] = ft_calloc(1, sizeof(char));
	if (tab[j] == NULL)
	{
		i = 0;
		while (tab[i])
			free (tab[i++]);
		free (tab);
		return (NULL);
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	int		start;

	tab = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (tab);
	i = 0;
	start = -1;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_substr(s, start, i - start);
		if (tab[j++] == NULL)
			return (handle(tab, start, --j));
	}
	return (handle (tab, start, j));
}

// int     main()
// {
//     char **str;
//     int i = 0;
// 	const char *s = "      dfdfdfgdf   ";
// 	int j = count_words (s, ' ');
// 	printf("j = %d\n", j);
//     str = ft_split(s, ' ');
// 	int y = 0;
//     // while (str[i] != 0)
// 	while (y < j)
//     {
//         printf ("|%s|\n", str[i]);
//         i++;
// 		y++;

//     }
// }
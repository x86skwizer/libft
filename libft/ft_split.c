/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:48:54 by yamrire           #+#    #+#             */
/*   Updated: 2021/12/06 03:40:43 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);

int	count_words(char const *s, char c)
{
	size_t	num_c;
	int		i;

	num_c = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i] != '\0')
				num_c++;
		}
		i++;
	}
	return (num_c + 1);
}

// int	count_words(char const *src, char c)
// {
// 	int	n;

// 	n = 0;
// 	while (*src == c)
// 		src++;
// 	while (*src != '\0')
// 	{
// 		while (*src && *src != c)
// 			src++;
// 		n++;
// 		while (*src && *src == c)
// 			src++;
// 	}
// 	return (n);
// }
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

char	**free_tab(char **tab)
{
	int	j;

	j = 0;
	while (tab[j])
		free(tab[j++]);
	free (tab);
	return (NULL);
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
		if (tab[j] == NULL)
			return (free_tab (tab));
		j++;
	}
	if (start == -1)
	{
		tab[j] = ft_calloc(1, sizeof(char));
		if (tab[j] == NULL)
			return (free_tab(tab));
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

/*int     main()
{
    char **str;
    int i = 0;
	int j = count_words ("abcd bscb dfbfd dfv ", ' ');
	printf("j = %d\n", j);
    str = ft_split("abcd bscb dfbfd dfv ", ' ');
    while (str[i] != 0)
    {
        printf ("|%s|\n", str[i]);
        i++;
    }
}*/

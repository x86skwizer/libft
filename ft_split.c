#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

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

size_t	count_blocks(char const *src, char c)
{
	size_t	n;

	n = 0;
	while (*src == c)
		src++;
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

char	**ft_split(char const *s, char c)
{
	char			**tab;
	size_t			num_b;
	unsigned int	i;
	unsigned int	start;

	tab = malloc((count_blocks(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	start = i;
	num_b = 0;
	while (s[i] != '\0')
	{
		while(s[i] != c)
			i++;
		tab[num_b] = ft_substr(s, start, i - start);
		
		num_b++;
	}
	tab[num_b] = NULL;
	return (tab);
} 

int     main()
{
    //char **str;
    //int i = 0;

    //str = ft_split("hello   wold  ", ' ');
    size_t j = count_blocks ("   djfd dfd efed. fefe.  ", ' ');
    int i = count_words ("   djfd dfd efed. fefe.  ", ' ');
	printf("i = %d j = %zu\n", i, j);
	// while (str[i] != 0)
    // {
    //     printf ("|%s|\n", str[i]);
    //     i++;
    // }
}
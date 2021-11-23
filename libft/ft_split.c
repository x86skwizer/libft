#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);

int     count_words(char const *s, char c)
{
    size_t  num_c;
    int     i = 0;

    num_c = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            num_c++;
        i++;
    }
    return (num_c + 1);
}

char **ft_split(char const *s, char c)
{
    char    **tab;
    size_t  i;
    int     j;
    size_t  num_c;
    size_t  remember;

    num_c = count_words(s, c);
    j = 0;
    tab = (char **) malloc((num_c + 1) * sizeof(char));
    i = 0;
    remember = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        { 
            tab[j] = ft_substr(s, remember, i - remember - 1);
            printf("|%s|\n", tab[j]);
			tab[j][i] = 0;
            j++;
            remember = i + 1;
        }
        i++;
    }
    tab[j] = ft_substr(s, remember, i - remember - 1);
	printf("|%s|\n", tab[j]);
    tab[j] = 0;
    return (tab);
}

int     main()
{
    char **str;
    int i = 0;

    str = ft_split("hello it s me sboof", ' ');
    while (str[i] != 0)
    {
        printf ("%s\n", str[i]);
        i++;
    }
}
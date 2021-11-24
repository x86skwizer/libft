#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
char    *ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);

int count_words(char const *s, char c)
{
    size_t num_c;
    int i = 0;

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

char **ft_split(char const *s, char c)
{
    char    **tab;
    size_t  i;
    size_t  start;

    tab = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
    i = 0;
    start = -1;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (!s[i])
           break; 
        start = i;
        while (s[i] && s[i] != c)
            i++;
        *tab++ = ft_substr(s, start, i - start);
    }
    if (start == -1)
       *tab++ = ft_calloc(1, sizeof(char));
    *tab = NULL;
    return (tab - count_words(s, c));
}

int     main()
{
    char **str;
    int i = 0;

    str = ft_split("gfgfgf   dgfb dgbfn  fgbfg     ", ' ');
    while (str[i] != 0)
    {
        printf ("|%s|\n", str[i]);
        i++;
    }
}
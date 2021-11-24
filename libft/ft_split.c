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

char **ft_split(char const *s, char c)
{
    char    **tab;
    size_t  i;
    int  start;

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

    str = ft_split("  ", ' ');
    while (str[i] != 0)
    {
        printf ("|%s|\n", str[i]);
        i++;
    }
}
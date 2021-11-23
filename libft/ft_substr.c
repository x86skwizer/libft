#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    num;
    
    
    if (len > ft_strlen(s))
    {
        len = ft_strlen(s);
        str = (char *) malloc((len + 1) * sizeof(char));
    }
    else
        str = (char *) malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    num = 0;
    while (num < len && start < ft_strlen(s))
    {
        str[num] = s[start + num];
        num++;
    }
    str[num] = '\0';
    return (str);
}


/*int main()
{
    char str[15] = "Yassine Amrire";
    printf("|%s|\n", ft_substr(str, 20, 11));
    return (0);
}*/
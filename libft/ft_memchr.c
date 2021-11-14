#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *str;
    unsigned char alpha;
    size_t num;

    if (n == 0)
        return (NULL);
    str = (char *)s;
    alpha = (unsigned char) c;
    num = 0;
    while (str[num] != '\0')
    {
        if (str[num] == alpha)
           return(&str[num]);
        num++;
    }
    return (NULL);
}

int main()
{
    
    printf("%s\n", (char *)ft_memchr("yassine", 's', 6));
    return 0;
}
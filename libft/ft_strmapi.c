#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ptr;
    size_t  num;

    ptr = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
    num = 0;
    while(s[num] != '\0')
    {
        ptr[num] = f(num, s[num]);
        num++;
    }
  ptr[num] = '\0';
  return (ptr);
}


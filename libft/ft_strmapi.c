#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ptr;
    unsigned int  num;

    num = 0;
    ptr = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!ptr)
      return (NULL);
    while(s[num] != '\0')
    {
        ptr[num] = f(num, s[num]);
        num++;
    }
  ptr[num] = '\0';
  return (ptr);
}

int main()
{
  
}
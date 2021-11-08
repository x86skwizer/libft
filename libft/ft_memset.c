#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t num;
    char *str;
    unsigned char alpha;

    str = (char *)b;
    alpha = (unsigned char)c;
    num = 0;
    while (num < len)
        str[num++] = alpha;
    return (str);
}

/*int main()
{
    char data[20];
    char dataft[20];

    memset(data, '\0', 20);
    ft_memset(dataft, '\0', 20);
    memset(data, 'A', 10);
    ft_memset(dataft, 'A', 10);
    printf("data   : %s\n", data);
    printf("dataft : %s\n", dataft);
    return (0);
}*/
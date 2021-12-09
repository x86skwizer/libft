#include "libft.h"
#include <string.h>
#include <stdio.h>
int     main()
{
    char    s1[10] = "123456789";
    char    s2[10] = "123456789";
    //char const  *s2 = NULL;
    // ft_memcpy(((void *)0), ((void *)0), 3);
    // memcpy(((void *)0), ((void *)0), 3);
    printf("ft_memmove : %s\n", (char *)ft_memmove( s1 + 3, s1, 5));
    printf("memmove    :%s\n", (char *)memmove( s2 + 3, s2, 5));
    return (0);
}
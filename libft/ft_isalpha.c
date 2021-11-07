#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    unsigned char a;

    a = (unsigned char)c;
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
        return(1);
    else
        return(0);
}

int main()
{
    char str = 'a';
    printf("isalpha    : |%d|\n", isalpha(str));
    printf("ft_isalpha : |%d|\n", ft_isalpha(str));
    return (0);

}
#include <stdio.h>

int ft_tolower(int c)
{
    unsigned char a;

    a = (unsigned char) c;
    if (!a)
        return (0);
    else if (a >= 65 && a <= 90)
    {
        a += 32;
    }
    return ((int) a);
}

int	main()
 {
 	unsigned char car;
 	int a = ft_tolower('A');
 	car = (unsigned char)a;
 	printf("%c", car);
 	return (0);
 }
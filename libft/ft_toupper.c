#include <stdio.h>
#include <ctype.h>

 int	ft_toupper(int c)
 {
 	unsigned char car;
 	car = (unsigned char)c;
 	if (!car)
 		return (0);
 	else if (car >= 97 && car <= 122)
 		car -= 32;
 	return ((int)car);
 }
 int	main()
 {
 	unsigned char car;
 	int a = ft_toupper('0');
 	car = (unsigned char)a;
 	printf("%c", car);
 	return (0);
 }


//int	ft_toupper(int c)
//{
//	return (c - 32 * (c >= 97 && c <= 122));
//}
//
//int	main()
//{
//	printf("%c", ft_toupper(97));
//	return (0);
//}
#include <stdio.h>
#include <string.h>

 size_t ft_strlen(const char *str)
 {
	 size_t num;

	 num = 0;
	 while(str[num] != '\n')
		 num++;
	return (num);
 }
 
 int	main()
{
	char str[] = "Yassine";
	printf("strlen    = |%lu|\n", strlen(str));
	printf("ft_strlen = |%lu|\n", strlen(str));
	return (0);
}
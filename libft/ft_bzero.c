#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}


int	main()
{
	char str[] = "Yassine";

	int	intd;
	intd = 0;
	// while (intd < 4)
	// {
	// 	printf(":>%s\n", arr[intd]);
	// 	intd++;
	// }

	ft_bzero(str, 4 * sizeof(char));
	intd = 0;
	printf("test :>%s\n", str);
	printf("test :>%s\n", str + 4);

	// while (intd < 4)
	// {
	// 	printf("test :>%d\n", arr[intd]);
	// 	intd++;
	// }
	
	return (0);
}
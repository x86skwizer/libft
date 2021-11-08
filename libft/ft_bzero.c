#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}


int	main()
{
	int arr[] = {1, 2, 3, 4};

	int	intd;
	intd = 0;
	while (intd < 4)
	{
		printf(":>%d\n", arr[intd]);
		intd++;
	}

	ft_bzero(arr, 4 * sizeof(int));
	intd = 0;
	while (intd < 4)
	{
		printf("test :>%d\n", arr[intd]);
		intd++;
	}
	
	return (0);
}
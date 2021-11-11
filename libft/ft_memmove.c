#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sorc;

	dest = (unsigned char *) dest;
	sorc = (unsigned char *) sorc;

	if
}

int	main()
{
	char str[] = "abcde";
	char str1[] = "abcde";
	memmove(str + 2, str, 3);
	memcpy(str1 + 2, str1, 3);
	printf("memmove : |%s|\n", str);
	printf("memcpy  : |%s|\n", str1);
	return 0;
}
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst || !src)
		return NULL;
	while (len--)
		((char *)dst)[len] = ((char *)src)[len];
	return (dst);
}

int	main()
{
	char str[] = "abcde";
	char str1[] = "abcde";
	//char str2[] = "abcde";
	ft_memmove(str1 + 2, str1, 3);
	//memcpy(str1 + 2, str1, 3);
	memmove(str + 2, str, 3);
	//printf("memcpy     : |%s|\n", str1);
	printf("memmove    : |%s|\n", str);
	printf("ft_memmove : |%s|\n", str1);
	return 0;
}
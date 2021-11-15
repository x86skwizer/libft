#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst || !src)
		return NULL;
	if (dst > src && dst < src + len)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else {
		return ft_memcpy(dst, src, len);
	}
	return (dst);
}

int	main()
{
	/*char str[] = "abcde";
	char str1[] = "abcde";
	//char str2[] = "abcde";
	ft_memmove(str1 + 2, str1, 3);
	//memcpy(str1 + 2, str1, 3);
	memmove(str + 2, str, 3);
	//printf("memcpy     : |%s|\n", str1);
	printf("memmove    : |%s|\n", str);
	printf("ft_memmove : |%s|\n", str1);*/
	char soverLap[] = "12345"; //Overlap src > dst
	//char soverLapResult[] = "23445";
	char soverLap1[] = "12345";
	printf("ft_memmove : |%s|\n", ft_memmove(soverLap, soverLap + 1, 3));
	printf("memmove : |%s|\n", memmove(soverLap1, soverLap1 + 1, 3));


	return 0;
}
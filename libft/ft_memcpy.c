#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned int i;
    unsigned char *dest;
    unsigned char *sorc;
    
    dest = (unsigned char *) dst;
    sorc = (unsigned char *) src;

    if (!dst || !src) return NULL;
    
    i = 0;
    while (i < n)
    {
        dest[i] = sorc[i];
        i++;
    }
    return (dest);
}

int	main()
{
	// //unsigned char dest[20];
	// //unsigned char dest1[20];
	// unsigned char src[20] = "Start Stop";

	// memcpy(src, src + 6, 4 * sizeof(unsigned char));
	// ft_memcpy(src, src + 6, 4 * sizeof(unsigned char));
	// printf("memcpy    : |%s|\n", src);
	// printf("ft_memcpy : |%s|\n", src);
    // char str[] = "foo-bar";
    // char str1[] = "foo-bar";
    // memmove(&str[3],&str[4],4);
    // ft_memcpy(&str1[3],&str1[4],4);
    // printf("memcpy    : |%s|\n", str);
	// printf("ft_memcpy : |%s|\n", str1);
    char str1[] = "abcde";
	memcpy(str1 + 2, str1, 3);
    printf("memcpy  : |%s|\n", str1);
	return 0;

}
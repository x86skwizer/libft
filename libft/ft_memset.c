#include <stdio.h>
#include <string.h>

int main()
{
    char data[20];

    memset(data, '\0', 20);
    memset(data, 'A', 10);
    printf("data : %s\n", data);
    return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char* aux_str1;
    unsigned char* aux_str2;
    aux_str1 = (unsigned char*) str1;
    aux_str2 = (unsigned char*) str2;

    while (n--)
    {
        if (*aux_str1 != *aux_str2)
            return(*aux_str1 - *aux_str2);
        aux_str1++;
        aux_str2++;
    }
    return (0);
}

int main (void)
{
    const char str1[50] = "asf394kMFIEJRA$s";
    const char str2[50] = "abcdDASRasf#@ef";
    int ret;

    ret = ft_memcmp (str1, str2, 9);
    printf("%d\n", ret);

}
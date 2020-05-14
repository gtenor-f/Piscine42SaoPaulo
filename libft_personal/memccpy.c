#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *ft_memccpy (void *dest, const void *src, int c, size_t n)
{
    unsigned char* aux_dest;
    unsigned char* aux_src;
    aux_dest = (unsigned char *) dest;
    aux_src = (unsigned char *) src;

    while (n-- != '\0' && *(aux_src-1) != c)
    {
        *aux_dest = *aux_src;
        aux_dest++;
        aux_src++;
    }
    return(aux_dest);
}

int main (void)
{
    char destination[50] = "abcdefgh";
    const char source[50] = "12345678";
    char* ret;

    ret = (char*) ft_memccpy(destination,source,'3',5);

    printf("%s\n", destination);
    printf("%s\n", ret);
    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * ft_memchr(const void *str, int c, size_t n)
{   
    unsigned char * aux_str;
    aux_str = (unsigned char *) str;

    while(n--)
    {
        if (*aux_str == c)
            return(aux_str);
        aux_str++;
    }
    return(NULL);

}

int main (void)
{ 
    const char source[10] = "abcdefghij";
    char* ret;

    ret = (char*) ft_memchr(source, 'f', 10);
    printf("%s\n", ret);
}
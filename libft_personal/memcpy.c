#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void * dest, const void * src, size_t n)
{
    unsigned char* aux_dest;
    unsigned char* aux_src;
    aux_dest = (unsigned char *) dest;
    aux_src = (unsigned char *) src;

    while (n--)
    {
        *aux_dest = *aux_src;
        aux_dest++;
        aux_src++;
    }
    return(dest);
}

int main (void)
{
    char destination[10] = "123456789";
    const char source[10] = "abcdefghij";
    char* ret;

    ret = (char*) ft_memcpy(destination,source,2);

    printf("%s\n", ret);
}

/*
int main () {
   const char src[50] = "abcdefghij";
   char dest[50];
   strcpy(dest,"0123456789");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 2);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *aux_str;
    aux_str = (unsigned char *)str; //Vamos alterar o conteúdo usando um ponteiro auxiliar.

    while (n--) //Enquanto n não for 0
    {
        *aux_str = c;
        aux_str++;
    }
    return (str);
}


int main (void)
{
    char texto[50] = "Eu gosto de banana";;
    int c = 'a';
    size_t n = 4;
    void * ret;

    ret = memset(texto,c,n);
    printf("memset: %s\n", (char*)ret);

    ret = ft_memset(texto,c,n);
    printf("ft_memset: %s\n", (char*)ret);

}
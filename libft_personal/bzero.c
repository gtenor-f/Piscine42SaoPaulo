#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_bzero(void *s, int nbyte)
{
    unsigned char *aux_s;
    aux_s = (unsigned char *)s;

    while(nbyte--)
    {
        *aux_s = '\0';
        aux_s++;
    }
}

int main(void)
{
    char texto[20] = "Eu gosto de banana";
    ft_bzero(texto,3);
    printf("%c\n", *texto);
    printf("%c\n", *(texto+1));
    printf("%c\n", *(texto+2));
    printf("%c\n", *(texto+3));
    printf("%c\n", *(texto+4));
    printf("%c\n", *(texto+5));
    printf("%c\n", *(texto+6));
    printf("%c\n", *(texto+7));
    printf("%c\n", *(texto+8));
    printf("%c\n", *(texto+9));
    printf("%c\n", *(texto+10));
    printf("%c\n", *(texto+11));
    
}
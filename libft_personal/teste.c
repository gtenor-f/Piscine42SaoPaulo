#include <stdio.h>
#include <stdlib.h>

/*
int main (void)
{
    int *p;

    p = (int *) malloc(sizeof(int));

    printf("%p\n", p);
}
*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char *entrada = "gustavo";
    char *resposta = strchr(entrada, 's');

    printf("Endereço salvo no ponteiro entrada: %p \n", entrada);
    printf("Endereço salvo no ponteiro resposta: %p \n", resposta);
    printf("Valor salvo no local da memória onde o ponteiro resposta aponta: %c \n", *resposta);
    printf("Valor salvo no local da memória onde o ponteiro resposta aponta e nos caracteres subsequentes: %s\n", &(*(resposta)));
    printf("Valor salvo no local da memória onde o ponteiro resposta aponta e nos caracteres subsequentes: %s\n", resposta);    
    printf("Valor salvo no local da memória onde o ponteiro ('resposta' + 1 para frente) aponta e nos caracteres subsequentes: %s\n", &(*(resposta+1)));
    printf("Valor salvo na string criada na reposta: %s\n", resposta);
    printf("Valor salvo na string criada na entrada: %s\n", entrada);

    return 0;
}
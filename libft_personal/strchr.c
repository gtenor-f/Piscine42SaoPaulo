
#include <stdio.h>
#include <string.h>

/*char	*ft_strchr(char *string, char *ch)
{
    int i;
    int j;

	i = 0;
    j = 0;
	while (string[i] != '\0')
	{
		if (string[i] == *ch)
        {
            //printf("%s", string);
            while (string[i] != '\0')
            {
                string[j] = string[i];
                j++;
                i++;
            }
        }
        i++;
	}
    string[j] = '\0';
    //printf("%s", string);
    return(string);     
}

int main () 
{
   char string[] = "Como é que eu posso me livrar das garras deste amor gostoso";
   char ch = 'i';
   char *ret;
   ret = ft_strchr(string, &ch);
   printf("%s", ret);
   return(0);
}

/////////////////////

*/

#include <stdio.h>
#include <string.h>


char	*ft_strchr(const char *string, int ch)
{
	while (*string != '\0')
	{
		if (*string == ch)
            return ((char*)string);
        string++;
	}
    if (ch == '\0')
        return ((char*)string);
    return(0);
}

int main () 
{
   char texto[] = "Eu gosto de banana";
   //char caractere = 'a';
   char caractere = 97;
   char *ft_ret;
   char *ret;
   //ret = ft_strchr(&texto[0], caractere);
   ft_ret = ft_strchr(texto, caractere);
   ret = strchr(texto, caractere);
   printf("ret = %s\n", ret);
   printf("ft_ret = %s\n", ft_ret);
   return(0);
}


////////////////////////

/*


char	*ft_strchr(const char *s, int c) //A função retorna um ponteiro de char. Declaração de um ponteiro const char e de um inteiro. 
// Este ponteiro *s recebe o endereço da primeira posição da string a qual estamos procurando pelo caractere.
// Quando for usar a função, o usuário irá colocar por exemplo: ft_strchr(&texto[0], caractere) ou ft_strchr(texto, caractere)
// A função também declara um inteiro c. Esse inteiro vai receber o caractere que estamos procurando. Lembrando que todo char é um inteiro. 
// Por isso se o usário estiver enviando um caractere 'a', ele está enviando o inteiro 97 (tabela ascii)
{
	while (*s) //Enquanto o valor onde o ponteiro aponta for diferente de 0 ou nulo (poderia ser while (*s != '\0')).
    // 0 (ou \0) é falso. Portanto a lógica é, 'enquanto não for (falso) faça:'
	{
		if (*s == c) //Se o valor que está onde o ponteiro aponta for igual ao caractere que estamos querendo encontrar
			return ((char*)s); // Retorna o ponteiro na posição atual, ou seja, na posição que encontrou o caractere.
            // Aqui o cast é necessário porque a função retorna um char, mas o *s é um const char.
		++s; //O ponteiro recebe o próximo endereço de mememória (que aponta para o próximo caractere da string)
	}
	if (c == '\0') //Só vamos cair neste if se o loop anterior terminar e o caractere não for encontrado
		return ((char*)s); //Portanto se o c for um caractere nulo, ele irá retornar o ponteiro na útlima posição do loop, logo, um \0
	return (0); // Se não encontrar nada e se o c não for nulo, retorna o 0
}

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *p;
    size_t aux_len;

    aux_len = len;
    p = malloc((len * sizeof(char)) + 1);
    if (p == NULL)
        return (NULL);
    s = s + start;
    while (len--)
    {
        *p = *s;
        p++;
        s++;
    }
    return(p-aux_len);
}

int main(void)
{
    char* ret;
    char const text[50] = "abcdefghijklmnipq";
    ret = ft_substr(text, 10, 5);
    printf("%s\n", ret);
}

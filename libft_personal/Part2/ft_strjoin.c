#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *concat;
    int len_s1;
    int len_s2;

    len_s1 = 0;
    len_s2 = 0;

    while (*s1)
    {
        s1++;
        len_s1++;
    }
    while (*s2)
    {
        s2++;
        len_s2++;
    }

    concat = malloc(sizeof(char) * (len_s1+len_s2));
    if (p == NULL)
    return (NULL);

    s1 = s1 - len_s1;
    s2 = s2 - len_s2;

    while (*s1)
    {
    *concat = *s1;
    concat++;
    s1++;
    }
    while (*s2)
    {
    *concat = *s2;
    concat++;
    s2++;
    }
    return (concat-len_s1-len_s2);
}

int main(void)
{
    char* ret;
    char const text_1[50] = "chegou_a_";
    char const text_2[50] = "turma_do_funil";
    ret = ft_strjoin(text_1, text_2);
    printf("%s\n", ret);
}
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

size_t	ft_strlen(const char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

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

char *ft_strtrim(char const *s1, char const *set)
{
    char* new_string;
    size_t ns_len;

    while (*s1 && (ft_strchr(set, *s1)))
        s1++;
    ns_len = ft_strlen (s1);
    while (ns_len && (ft_strchr(set, s1[ns_len])))
        ns_len--;
    new_string = ft_substr((char*)s1,0,ns_len+1);
    return (new_string);

}

int main (void)
{
    char text[50] = "*!$ABC*!$DEFG$";
    char to_cut[10] = "*!$";
    char* ret;

    ret = ft_strtrim(text, to_cut);

    printf("%s\n", ret);

}


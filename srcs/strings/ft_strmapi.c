#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char)) {
    int pos;
    char *copy;
    
    if (!s)
        return NULL;

    pos = 0;
    copy = ft_strnew(ft_strlen(s));
    
    if (copy != NULL) {
        while (*s) {
            copy[pos] = (*f)(pos, *(s++));
            pos++;
        }

        copy[pos] = '\0';
    }

    return copy;
}

#include "libft.h"

char *ft_strmap(const char *s, char (*f)(char)) {
    int pos;
    char *copy;
    
    if (!s)
        return NULL;

    pos = 0;
    copy = ft_strnew(ft_strlen(s));
    
    if (copy != NULL) {
        while (*s)
            copy[pos++] = (*f)(*(s++));

        copy[pos] = '\0';
    }

    return copy;
}

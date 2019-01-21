#include "libft.h"

char  *ft_strchr(const char *s, int c) {
    char find_me;

    find_me = (char) c;
    
    while (*s != '\0' && *s != c)
        s++;

    if (*s == c)
        return (char *) s;
    else 
        return NULL;
}

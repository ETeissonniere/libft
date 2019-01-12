#include "libft.h"

char *ft_strdup(const char *s1) {
    int size;
    char *copy;
    
    size = ft_strlen(s1);
    if ((copy = (char *) malloc(sizeof(char) * size + 1)) == NULL) {
        return NULL;
    }

    ft_memcpy(copy, s1, size);
    copy[size] = '\0';

    return copy;
}

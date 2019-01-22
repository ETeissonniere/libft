#include <stdlib.h>

#include "libft.h"

char *ft_strnew(size_t size) {
    char *ptr;

    ptr = malloc(size + 1);
    if (ptr == NULL)
        return NULL;

    return ft_memset(ptr, '\0', size + 1);
}

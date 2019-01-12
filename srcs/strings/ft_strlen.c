#include "libft.h"

int ft_strlen(const char *s) {
    const char *start = s;

    while (*s)
        s++;

    return s - start;
}

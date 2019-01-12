#include "libft.h"

void *ft_memset(void *b, int c, size_t len) {
    unsigned char to_fill;
    unsigned char *d;

    to_fill = (unsigned char) c;
    d = (unsigned char *) b;

    while (len--)
        *(d++) = to_fill;

    return b;
}

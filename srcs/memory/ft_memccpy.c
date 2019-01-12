#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n) {
    unsigned char searching_for;
    unsigned char *d;
    const unsigned char *s;

    searching_for = (unsigned char) c;
    d = (unsigned char *) dst;
    s = (const unsigned char *) src;

    while (n--) {
        *(d++) = *(s++);

        if (*(d - 1) == searching_for)
            return d;
    }

    return NULL;
}

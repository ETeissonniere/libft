#include "memory/ft_memccpy.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n) {
    if (n) {
        *((unsigned char *) dst) = *((unsigned char *) src);

        if (*((unsigned char *) src) == (unsigned char) c) {
            return (unsigned char *) dst + 1;
        } else {
            return ft_memccpy((unsigned char *) dst + 1, (unsigned char *) src + 1, c, n - 1);
        }
    }

    return NULL;
}

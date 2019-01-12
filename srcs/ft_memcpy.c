#include "ft_memcpy.h"

void *ft_memcpy(void *dst, const void *src, size_t n) {
    if (n) {
        *((unsigned char *) dst) = *((unsigned char *) src);
        ft_memcpy((unsigned char *) dst + 1, (unsigned char *) src + 1, n - 1);
    }

    return dst;
}

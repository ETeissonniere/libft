#include "memory/ft_memcpy.h"
#include "memory/ft_memmove.h"

/*
** Memcpy copies data from the beginning of the buffers,
** because of the overlap we need to it in the inversed
** way.
*/
static void _inverted_memcpy(void *dst, const void *src, size_t n) {
    if (n) {
        *((unsigned char *) dst) = *((unsigned char *) src);
        _inverted_memcpy((unsigned char *) dst - 1, (unsigned char *) src - 1, n - 1);
    }
}

void *ft_memmove(void *dst, const void *src, size_t len) {
    if (dst < src) {
        ft_memcpy(dst, src, len);
    } else {
        _inverted_memcpy((unsigned char *) dst + len - 1, (unsigned char *) src + len - 1, len);
    }

    return dst;
}

#include "libft.h"

static void __forward_cpy(void *dst, const void *src, size_t n) {
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *) dst;
    s = (const unsigned char *) src;

    while (n--)
        *(d++) = *(s++);
}

static void __backward_cpy(void *dst, const void *src, size_t n) {
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *) dst + n - 1;
    s = (const unsigned char *) src + n - 1;

    while (n--)
        *(d--) = *(s--);
}

void *ft_memmove(void *dst, const void *src, size_t len) {
    if (dst < src) {
        __forward_cpy(dst, src, len);
    } else if (dst > src) {
        __backward_cpy(dst, src, len);
    }

    return dst;
}

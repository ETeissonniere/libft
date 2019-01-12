#include "ft_bzero.h"

void ft_bzero(void *s, size_t n) {
    if (n) {
        *((unsigned char *) s) = 0;
        ft_bzero((unsigned char *)s + 1, n - 1);
    }
}

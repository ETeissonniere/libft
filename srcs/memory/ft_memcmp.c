#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *b1;
    const unsigned char *b2;

    b1 = (const unsigned char *) s1;
    b2 = (const unsigned char *) s2;

    while (n--)
        if (*(b1++) != *(b2++))
            return *(b1 - 1) - *(b2 - 1);

    return 0;
}

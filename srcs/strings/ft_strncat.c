#include "libft.h"

static void __strncat(char *s1, const char *s2, size_t n) {
    while (*s1)
        s1++;

    while (*s2 && n--)
        *(s1++) = *(s2++);

    *s1 = '\0';
}

char *ft_strncat(char *s1, const char *s2, size_t n) {
    __strncat(s1, s2, n);
    return s1;
}

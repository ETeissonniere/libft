#include "libft.h"

static void __strcat(char *s1, const char *s2) {
    while (*s1)
        s1++;

    while (*s2)
        *(s1++) = *(s2++);

    *s1 = '\0';
}

char *ft_strcat(char *s1, const char *s2) {
    __strcat(s1, s2);
    return s1;
}

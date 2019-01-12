#include "libft.h"

static void __strcat(char *s1, const char *s2) {
    while (*s1)
        s1++;

    ft_strcpy(s1, s2);
}

char *ft_strcat(char *s1, const char *s2) {
    __strcat(s1, s2);
    return s1;
}

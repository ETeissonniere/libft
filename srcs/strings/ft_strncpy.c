#include "libft.h"

static void __copy_strn(char *dst, const char *src, size_t len) {
    while (len--)
        if (*src)
            *(dst++) = *(src++);
        else
            *(dst++) = '\0';
}

char *ft_strncpy(char *dst, const char *src, size_t len) {
    __copy_strn(dst, src, len);
    return dst;
}

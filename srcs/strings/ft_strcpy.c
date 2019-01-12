#include "libft.h"

/*
** If we want to use memcpy, we have to compute the
** size of "src", this would be an O(2n) algorithm
** here we avoid this and end with an O(n) solution.
*/
static void __copy_str(char *dst, const char *src) {
    while (*src)
        *(dst++) = *(src++);

    *(dst++) = '\0';
}

char *ft_strcpy(char *dst, const char *src) {
    __copy_str(dst, src);
    return dst;
}

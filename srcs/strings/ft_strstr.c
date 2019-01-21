#include "libft.h"

char  *ft_strstr(const char *haystack, const char *needle) {
    int pos_haystack;
    int pos_needle;

    pos_haystack = 0;

    if (*needle == '\0')
        return (char *) haystack;

    while (haystack[pos_haystack] != '\0') {
        pos_needle = 0;

        while (needle[pos_needle] == haystack[pos_haystack + pos_needle]) {
            if (needle[pos_needle + 1] == '\0')
                return (char *) haystack + pos_haystack;
            
            pos_needle++;
        }

        pos_haystack++;
    }

    return NULL;
}

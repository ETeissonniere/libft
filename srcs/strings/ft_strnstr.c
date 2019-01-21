#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t pos_haystack;
    size_t pos_needle;

    pos_haystack = 0;

    if (*needle == '\0')
        return (char *) haystack;

    while (haystack[pos_haystack] != '\0' && pos_haystack < len) {
        pos_needle = 0;

        while (needle[pos_needle] == haystack[pos_haystack + pos_needle] && pos_haystack + pos_needle < len) {
            if (needle[pos_needle + 1] == '\0')
                return (char *) haystack + pos_haystack;
            
            pos_needle++;
        }

        pos_haystack++;
    }

    return NULL;
}

#include "libft.h"

char *ft_strrev(char *s) {
    char tmp;
    int size;
    int pos;

    size = ft_strlen(s);
    pos = 0;

    while (pos < (size / 2)) {
        tmp = s[pos];
        s[pos] = s[size - 1 - pos];
        s[size - 1 - pos] = tmp;

        pos++;
    }

    s[size] = '\0';

    return s;
}

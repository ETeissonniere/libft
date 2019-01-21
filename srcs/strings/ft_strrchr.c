#include "libft.h"

char  *ft_strrchr(const char *s, int c) {
    char  find_me;
    char *found_at;

    find_me = (char) c;
    found_at = NULL;

    while (*s || (find_me == '\0' && found_at == NULL)) {
        if (*s == find_me)
            found_at = (char *) s;

        s++;
    }

    return found_at;
}

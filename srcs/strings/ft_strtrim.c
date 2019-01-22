#include "libft.h"

#define SHOULD_IGNORE(c) ft_isblank(c) || c == '\n'

char *ft_strtrim(char const *s) {
    size_t size;
    char *trimmed;
    
    if (!s)
        return NULL;

    while (SHOULD_IGNORE(*s))
        s++;

    if (*s == '\0')
        return ft_strnew(0);

    size = ft_strlen(s) - 1;
    while (size > 0 && SHOULD_IGNORE(s[size]))
        size--;

    size += 1;
    trimmed = ft_strnew(size);
    if (trimmed == NULL)
        return NULL;

    trimmed = ft_strncpy(trimmed, s, size);
    trimmed[size] = '\0';
    return trimmed;
}

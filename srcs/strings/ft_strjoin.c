#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    size_t total_size;
    size_t size_s1;
    size_t size_s2;
    char *joined_str;

    if (!s1 || !s2)
        return NULL;

    size_s1 = ft_strlen(s1);
    size_s2 = ft_strlen(s2);
    total_size = size_s1 + size_s2 + 1;

    joined_str = ft_strnew(total_size);
    if (joined_str == NULL)
        return NULL;

    joined_str = ft_strcpy(joined_str, s1);
    return ft_strcat(joined_str, s2);
}

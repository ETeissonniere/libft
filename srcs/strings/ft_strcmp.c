#include "libft.h"

int ft_strcmp(const char *s1, const char *s2) {
    const unsigned char *str_1;
    const unsigned char *str_2;

    str_1 = (const unsigned char *) s1;
    str_2 = (const unsigned char *) s2;

    while (*str_1 != '\0' && *str_2 != '\0')
        if (*(str_1++) != *(str_2++))
            return *(str_1 - 1) - *(str_2 - 1);

    return *str_1 - *str_2;
}

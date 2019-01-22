#include "libft.h"

#include <stdio.h>
static void __compute_size(int n, int *size) {
    while (n /= 10)
        (*size)++;
}

char *ft_itoa(int n) {
    int sign;
    int size;
    char *as_str;

    if (n == -2147483648)
        return ft_strdup("-2147483648");

    sign = (n < 0);
    if (sign)
        n = -n;

    size = 2;
    __compute_size(n, &size);
    size += sign;

    as_str = ft_strnew(--size);
    if (as_str == NULL)
        return NULL;

    as_str[size] = '\0';

    while (size--) {
        as_str[size] = (n % 10) + '0';
        n /= 10;
    }

    if (sign)
        as_str[0] = '-';

    return as_str;
}

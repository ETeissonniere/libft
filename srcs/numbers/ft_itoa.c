#include "libft.h"

char *ft_itoa(int n) {
    int sign;
    int size;
    int pos;
    char *as_str;

    sign = (n < 0);
    if (sign)
        n = -n;

    size = 0;
    while (ft_power(10, size) < n)
        size++;

    as_str = ft_strnew(size + 1);
    if (as_str == NULL)
        return NULL;

    pos = 1;
    as_str[0] = (n % 10) + '0';
    while ((n /= 10) > 0)
        as_str[pos++] = (n % 10) + '0';

    if (sign)
        as_str[pos++] = '-';

    as_str[size + 1] = '\0';

    return ft_strrev(as_str);
}

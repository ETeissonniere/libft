#include "libft.h"

static int __should_ignore(char str) {
    return
        ft_isblank(str) ||
        str == '\n'     ||
        str == '\v'     ||
        str == '\r'     ||
        str == '\f';
}

int ft_atoi(const char *str) {
    int coeff;
    long res;

    coeff = 1;
    res = 0;

    while (__should_ignore(*str))
        str++;

    if (*str == '-' || *str == '+')
        if (*(str++) == '-')
            coeff = -1;

    while (ft_isdigit(*str))
        res = (res * 10) + (*(str++) - '0');
    
    return res * coeff;
}

#include "libft.h"

int ft_power(int n, int p) {
    int res;

    if (p == 0)
        return 1;

    res = n;
    while (p - 1) {
        res *= n;

        p--;
    }

    return res;
}

#include "libft.h"

void ft_putnbr(int n) {
    long i;
    i = n;

    if (i < 0) {
        ft_putchar('-');
        i = -i;
    }
    
    if (i > 9)
        ft_putnbr(i / 10);

    ft_putchar((i % 10) + '0');
}

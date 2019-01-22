#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
    long i;
    i = n;

    if (i < 0) {
        ft_putchar_fd('-', fd);
        i = -i;
    }

    if (i > 9)
        ft_putnbr_fd(i / 10, fd);

    ft_putchar_fd((i % 10) + '0', fd);
}

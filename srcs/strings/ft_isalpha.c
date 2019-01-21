#include "libft.h"

int ft_isalpha(int c) {
    unsigned char test;

    test = (unsigned char) c;

    return 
        (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z');
}

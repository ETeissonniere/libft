#include <stdlib.h>

#include "libft.h"

/*
** Protected against double free
*/
void ft_memdel(void **ap) {
    if (ap && *ap) {
        free(*ap);
        *ap = NULL;
    }
}

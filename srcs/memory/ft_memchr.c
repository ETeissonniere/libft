#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    unsigned char find_me;
    const unsigned char *buffer;
    
    find_me = (unsigned char) c;
    buffer = (const unsigned char *) s;
    
    while (n--) 
        if (*(buffer++) == find_me)
            return (void *) (buffer - 1);

    return NULL;
}

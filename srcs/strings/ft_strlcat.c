#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t pos;
    size_t dst_len;
    size_t src_len;

    pos = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dstsize <= dst_len)
        return src_len + dstsize;

    pos = dst_len;

	while (*src && pos < (dstsize - 1))
		dst[pos++] = *(src++);

	dst[pos] = '\0';

    return dst_len + src_len;
}

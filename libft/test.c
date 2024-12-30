#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    src[20] = "Afnan";
    char    dest[20] = "Farid";
    size_t  len;

    len = ft_strlcat(dest, src, 6);
    printf("My function ft_strlcpy:%ld\n", len);

    // strlcpy(dest, src, 5);
    // printf("the orignial function strlcpy:%s\n", dest);

    return (0);
}
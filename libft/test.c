#include "libft.h"
#include <stdio.h>
#include <string.h>


int main(void)
{
    const char    *str = "Afnan Farid Shaheen";
    char    **result;
    size_t  i;

    result = ft_split(str, ' ');
    if(!result)
        return(0);
    i = 0;
    while (result[i] != NULL)
    {
        printf("The result of ft_split: %s\n", result[i]);
        free (result[i]);
        i++;
    }
    free(result);
    return (0);
}
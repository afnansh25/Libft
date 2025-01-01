#include "libft.h"
#include <stdio.h>
#include <string.h>


// int main(void)
// {
//     const char    *str = "Afnan Farid Shaheen";
//     char    **result;
//     size_t  i;

//     result = ft_split(str, ' ');
//     if(!result)
//         return(0);
//     i = 0;
//     while (result[i] != NULL)
//     {
//         printf("The result of ft_split: %s\n", result[i]);
//         free (result[i]);
//         i++;
//     }
//     free(result);
//     return (0);
// }

int main(void) {
    char *result;

    // Test case 1: Positive number
    result = ft_itoa(12345);
    printf("Test 1: %s\n", result); // Expected: "12345"
    free(result);

    // Test case 2: Negative number
    result = ft_itoa(-12345);
    printf("Test 2: %s\n", result); // Expected: "-12345"
    free(result);

    // Test case 3: Zero
    result = ft_itoa(0);
    printf("Test 3: %s\n", result); // Expected: "0"
    free(result);

    // Test case 4: INT_MIN
    result = ft_itoa(-2147483648);
    printf("Test 4: %s\n", result); // Expected: "-2147483648"
    free(result);

    // Test case 5: INT_MAX
    result = ft_itoa(2147483647);
    printf("Test 5: %s\n", result); // Expected: "2147483647"
    free(result);

    return (0);
}
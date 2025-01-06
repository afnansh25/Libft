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

// int main(void) {
//     char *result;

//     // Test case 1: Positive number
//     result = ft_itoa(12345);
//     printf("Test 1: %s\n", result); // Expected: "12345"
//     free(result);

//     // Test case 2: Negative number
//     result = ft_itoa(-12345);
//     printf("Test 2: %s\n", result); // Expected: "-12345"
//     free(result);

//     return (0);
// }

// char    to_uppercase(unsigned int i, char c)
// {
//     (void)i;

//     return ((char)ft_toupper((int)c));

// }

// int main(void)
// {
//     char    *result;

//     result = ft_strmapi("hello, world!", to_uppercase);
//     if (result)
//     {
//         printf("Result: %s\n", result);
//         free (result);
//     }
//     return (0);
// }


// void to_uppercase(unsigned int i, char *c) {
//     (void)i; // Ignore the index
//     if (*c >= 'a' && *c <= 'z') {
//         *c -= 32; // Convert to uppercase
//     }
// }

// void append_index(unsigned int i, char *c) {
//     *c = *c + i % 26; // Add the index to the character (cyclic within the alphabet)
// }

// int main(void) {
//     char str1[] = "hello";
//     char str2[] = "abcd";

//     // Test case 1: Convert to uppercase
//     ft_striteri(str1, to_uppercase);
//     printf("Test 1: %s\n", str1); // Expected: "HELLO"

//     // Test case 2: Append index to characters
//     ft_striteri(str2, append_index);
//     printf("Test 2: %s\n", str2); // Expected: "aceg" (depends on function logic)

//     return (0);
// }

#include <fcntl.h> // For open()
#include <unistd.h> // For close()

int main(void) {
    // Test 1: Write to the terminal (fd = 1)
    ft_putstr_fd("Writing to the terminal (Standard Output)\n", 1);

    // Test 2: Write an error message (fd = 2)
    ft_putstr_fd("This is an error message (Standard Error)\n", 2);

    // Test 3: Write to a file
    int file_fd = open("output.txt", O_WRONLY | O_CREAT| O_TRUNC, 0644);
    if (file_fd < 0) {
        perror("Error opening file"); // Print error if file cannot be opened
        return (1);
    }
    ft_putstr_fd("Hello, file!\n", file_fd); // Write to the file
    ft_putchar_fd('A', file_fd); // Write a single character to the file
    close(file_fd); // Close the file descriptor

    // Test 4: Reading back the file (for demonstration)
    file_fd = open("output.txt", O_RDONLY);
    if (file_fd < 0) {
        perror("Error opening file for reading");
        return (1);
    }
    char buffer[100];
    int bytes_read = read(file_fd, buffer, sizeof(buffer) - 1);
    if (bytes_read > 0) {
        buffer[bytes_read] = '\0'; // Null-terminate the string
        ft_putstr_fd("Read from file:\n", 1);
        ft_putstr_fd(buffer, 1); // Print file content to the terminal
    } else {
        perror("Error reading file");
    }
    close(file_fd); // Close the file descriptor

    return (0);
}

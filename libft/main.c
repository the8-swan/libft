#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Helper function to print the result of ft_split
void print_split(char **arr)
{
    int i = 0;
    if (!arr)
    {
        printf("(null)\n");
        return;
    }
    while (arr[i])
    {
        printf("'%s' ", arr[i]);
        i++;
    }
    printf("[NULL]\n"); // show the terminator clearly
}

int main(void)
{
    char **result;

    // 1. Basic case
    result = ft_split("hello world 42", ' ');
    print_split(result);
    // Expected: 'hello' 'world' '42' [NULL]

    // 2. Multiple delimiters in a row
    result = ft_split("a,,b,,,c", ',');
    print_split(result);
    // Expected: 'a' 'b' 'c' [NULL]

    // 3. Leading delimiters
    result = ft_split("   spaced", ' ');
    print_split(result);
    // Expected: 'spaced' [NULL]

    // 4. Trailing delimiters
    result = ft_split("end--", '-');
    print_split(result);
    // Expected: 'end' [NULL]

    // 5. Leading + trailing
    result = ft_split("---middle---", '-');
    print_split(result);
    // Expected: 'middle' [NULL]

    // 6. Only delimiters
    result = ft_split(";;;;;", ';');
    print_split(result);
    // Expected: [NULL] (empty array)

    // 7. Empty string
    result = ft_split("", ',');
    print_split(result);
    // Expected: [NULL]

    // 8. No delimiter in string
    result = ft_split("nodelem", ',');
    print_split(result);
    // Expected: 'nodelem' [NULL]

    // 9. Null input
    result = ft_split(NULL, ',');
    print_split(result);
    // Expected: (null)

    // 10. Complex test (your earlier case)
    result = ft_split("oumaimacbakric42cc", 'c');
    print_split(result);
    // Expected: 'oumaima' 'bakri' '42' [NULL]

    return 0;
}

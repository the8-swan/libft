#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    printf("%s\n", ft_itoa(0));           // "0"
    printf("%s\n", ft_itoa(42));          // "42"
    printf("%s\n", ft_itoa(-42));         // "-42"
    printf("%s\n", ft_itoa(2147483647));  // "2147483647"
    printf("%s\n", ft_itoa(-2147483648)); // "-2147483648"
    return 0;
}

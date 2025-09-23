#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"   // your header with ft_strmapi prototype

// === Callback functions for testing ===

// Identity: returns the same char
char identity(unsigned int i, char c) {
    (void)i; // unused
    return c;
}

// Shift character by index: c + i
char shift_by_index(unsigned int i, char c) {
    return c + i;
}

// Uppercase only characters at even indices
char uppercase_even(unsigned int i, char c) {
    if (i % 2 == 0)
        return (char)toupper((unsigned char)c);
    return c;
}

// Replace every char with '*'
char starify(unsigned int i, char c) {
    (void)i;
    (void)c;
    return '*';
}

// === Main test program ===
int main(void) {
    char *result;

    // Test 1: identity
    result = ft_strmapi("abc", identity);
    printf("Test 1: %s (expected: abc)\n", result);
    free(result);

    // Test 2: shift by index
    result = ft_strmapi("abc", shift_by_index);
    printf("Test 2: %s (expected: ace)\n", result);
    free(result);

    // Test 3: uppercase even indices
    result = ft_strmapi("hello", uppercase_even);
    printf("Test 3: %s (expected: HeLlO)\n", result);
    free(result);

    // Test 4: empty string
    result = ft_strmapi("", starify);
    printf("Test 4: \"%s\" (expected: \"\")\n", result);
    free(result);

    // Test 5: starify
    result = ft_strmapi("libft", starify);
    printf("Test 5: %s (expected: ******)\n", result);
    free(result);

    // Test 6: NULL input
    result = ft_strmapi(NULL, identity);
    printf("Test 6: %s (expected: (null))\n", result);

    return 0;
}

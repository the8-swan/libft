#include <stdio.h>
#include <ctype.h>
#include "libft.h"   // your header with ft_striteri prototype

// === Callback functions for testing ===

// Uppercase every character
void to_upper(unsigned int i, char *c) {
    (void)i; // index not used
    *c = (char)toupper((unsigned char)*c);
}

// Add index to character
void shift_by_index(unsigned int i, char *c) {
    *c = *c + i;
}

// Replace even indices with '*'
void star_even(unsigned int i, char *c) {
    if (i % 2 == 0)
        *c = '*';
}

// Identity (does nothing)
void identity(unsigned int i, char *c) {
    (void)i;
    (void)c;
    // no change
}

// === Main test program ===
int main(void) {
    char str1[] = "hello";
    char str2[] = "abc";
    char str3[] = "libft";
    char str4[] = "";
    char str5[] = "test";

    // Test 1: uppercase
    ft_striteri(str1, to_upper);
    printf("Test 1: %s (expected: HELLO)\n", str1);

    // Test 2: shift by index
    ft_striteri(str2, shift_by_index);
    printf("Test 2: %s (expected: ace)\n", str2);

    // Test 3: star even indices
    ft_striteri(str3, star_even);
    printf("Test 3: %s (expected: *i*f*)\n", str3);

    // Test 4: empty string
    ft_striteri(str4, to_upper);
    printf("Test 4: \"%s\" (expected: \"\")\n", str4);

    // Test 5: identity
    ft_striteri(str5, identity);
    printf("Test 5: %s (expected: test)\n", str5);

    // Test 6: NULL input
    ft_striteri(NULL, to_upper); // should do nothing, no crash

    return 0;
}

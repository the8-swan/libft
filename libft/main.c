#include "libft.h"

int main(void)
{
    char *result;


    result = ft_strtrim("aaa", "a");
    printf("'%s'\n", result);  // Expected: ''
    free(result);
    


    // 4. Trim only start
    result = ft_strtrim("!!!wow", "!");
    printf("'%s'\n", result);  // Expected: 'wow'
    free(result);

    // 5. Trim only end
    result = ft_strtrim("wow!!!", "!");
    printf("'%s'\n", result);  // Expected: 'wow'
    free(result);

    // 6. Trim start and end
    result = ft_strtrim("!!wow!!", "!");
    printf("'%s'\n", result);  // Expected: 'wow'
    free(result);

  
    // 8. NULL input
    result = ft_strtrim(NULL, "a");
    printf("%s\n", result ? result : "(null)");
    // free(result); NULL, no need
  
    // 9. NULL set
    result = ft_strtrim("hello", NULL);
    printf("%s\n", result ? result : "(null)");
    // free(result); NULL, no need
  
    // 10. Complex case (from your example)
    result = ft_strtrim("abzzzab", "abc");
    printf("'%s'\n", result);  // Expected: 'zzz'
    free(result);

    result = ft_strtrim("abzzzabz", "abc");
    printf("'%s'\n", result);  // Expected: 'zzzabz'
    free(result);

    return 0;
}

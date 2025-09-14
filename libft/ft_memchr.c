#include "libft.h"


void *ft_memchr(const void *s, int c, size_t n){
    size_t i=0;
    const unsigned char *ptr = (const unsigned char *)s;

    while(i<n ){
        if(ptr[i]== (unsigned char) c )
                return  (void *)&ptr[i];
        i++;
    }

    return NULL;
}
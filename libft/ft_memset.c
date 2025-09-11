#include "libft.h"


void *ft_memset(void *dest, int c, size_t count){
        size_t i;
        i=0;
        while(i < count){
            ((unsigned char*) dest)[i] = (unsigned char) c; 
            i++;
        }
        return dest;
}
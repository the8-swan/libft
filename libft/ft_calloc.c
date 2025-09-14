#include "libft.h"


void *ft_calloc(size_t count, size_t size){
    void *ptr = malloc(count*size);
    size_t i =0;
    if(!ptr){
        return NULL;
    }
    while(i < count*size){
        ((unsigned char*)ptr)[i] = 0;
        i++;
    }

    return ptr;
}
#include "libft.h"


char *ft_strdup(const char *s1){
    size_t length = ft_strlen(s1+1);
    size_t i=0;
    char* ptr = malloc(length);
    if(!ptr){
        return NULL;
    }
    while(i<length){
        ptr[i]=s1[i];
        i++;
    }
    ptr[i]='\0';
    return ptr;

}
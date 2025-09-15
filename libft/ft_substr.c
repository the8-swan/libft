#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    size_t i =0;
    size_t slength=0;
    char* ptr = NULL;
    if(!s){
        return ptr;
    }
    slength = ft_strlen(s);

    if(start >= slength){
        len = 0;
    }else if(len > slength -start){
            len = slength - start;
    }
    ptr = malloc(sizeof(char) * (len+1));
    if(!ptr){
        return NULL;
    }

    while(i<len){
        ptr[i] = s[start+i];
        i++;
    }
    ptr[i]='\0';
    return ptr;
}









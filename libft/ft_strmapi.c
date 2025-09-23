#include "libft.h"




char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
        size_t i =0; 
        size_t length =0;
        char* ptr =NULL;

        if(s==NULL || f==NULL)
            return NULL;
        length = ft_strlen(s);
        ptr= malloc(sizeof(char)*(length+1));
        if(!ptr)
            return NULL;
        while(i<length){
            ptr[i]= f((unsigned int) i,s[i]);
            i++;
        }
        ptr[i]= '\0';
        return ptr;
}





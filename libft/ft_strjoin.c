#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2){
    size_t lens1 =0;
    size_t lens2 =0;
    char* ptr = NULL;
    size_t size= 0;
    size_t i=0; 
    size_t j=0;
    size_t z=0;

    if(!s1 && !s2)
        return NULL;
   
    if(!s1){
        lens1 = 0;
        lens2 = ft_strlen (s2);
    }else if(!s2){
        lens2 = 0;
        lens1 = ft_strlen (s1);
    }else {
         lens1 = ft_strlen(s1);
         lens2 = ft_strlen (s2);
    }

    size = lens1 +lens2 +1;
    ptr= malloc(sizeof(char) * size);
    if(!ptr)
        return NULL;
    
    while(j<lens1)
        ptr[i++] = s1[j++];

    while(z<lens2)
         ptr[i++] = s2[z++];
    ptr[i] ='\0';
        return ptr;
}
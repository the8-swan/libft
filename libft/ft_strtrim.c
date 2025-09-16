#include "libft.h"


char *ft_strtrim(char const *s1, char const *set){
    size_t i=0;
    size_t j=0;
    
    char* ptr =NULL;
    char *start = NULL;
    char *end =NULL;
    
    if(!s1 || !set)
        return NULL;


    while(set[i]){
        if(set[i] == s1[j]){
            i=0;
            j++;
        }else{
            i++;
        }
    }   
    start =&((char *)s1)[j]; 
    i =ft_strlen(set)-1;
    j =ft_strlen(s1)-1;
    while(end!=start && (int )i>=0){
            if(set[i] == s1[j]){
                i=ft_strlen(set)-1;
                j--;
            }else{
                i--;
            }
  
    }
    end =&((char *)s1)[j];
    if (start > end)
    {
        ptr = malloc(1);
        if (!ptr)
            return NULL;
        ptr[0] = '\0';
        return ptr;
    }
    
    ptr= malloc(end-start +1);
     if(!ptr)
         return NULL;
    i=0;
    while(start!=(end+1)){
        ptr[i++]=*start;
        start++;
    }
    ptr[i]= '\0';
    return ptr;
     

}
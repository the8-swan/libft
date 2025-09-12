 #include "libft.h"

 void *ft_memmove(void *dst, const void *src, size_t len){
    size_t i=0;


    if(!dst && !src)
        return NULL;

        
    if(((unsigned char*) src) < ((unsigned char*)dst)){
        while(len>0){
                len--;
                ((unsigned char*) dst)[len]= ((unsigned char*) src)[len];
    
        }
    }else{
        while(i<len){
            ((unsigned char*) dst)[i]= ((unsigned char*) src)[i];
            i++;

    } 
    }
     return dst;
 }
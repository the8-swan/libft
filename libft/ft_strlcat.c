#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size){
        size_t i =0;
        size_t src_l = ft_strlen(src);
        size_t dst_l = ft_strlen(dst);

        
        
        if(dst_l >= size){
            return size+src_l;
        }

        while(src[i] && (dst_l+i)<size-1){
                dst[dst_l+i] =src[i];
                i++;
        }
        dst[dst_l+i] ='\0';

        return dst_l + src_l;
    
}
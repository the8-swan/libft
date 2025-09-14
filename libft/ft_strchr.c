#include "libft.h"



char *ft_strchr(const char *str, int ch){
        size_t i =0;
        while(str[i]){
            if(str[i] == (unsigned char) ch){
                return (char *) &str[i];
            }
            if(!str[i+1] && str[i+1]== (unsigned char) ch){
                return (char *) &str[i+1];
            }
            i++;
        }
        return NULL;
}
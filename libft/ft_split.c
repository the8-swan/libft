#include "libft.h"


size_t count_words(char const *s ,char c){
        size_t counter =0;
        size_t i =0;

        if(!s)
            return 0;

        while(s[i]){
            if(s[i] != c && (i==0 || s[i-1]==c)){
                counter++;
            }
              
            i++;
        }
        return counter;
}

char *allocat(char* from , char* to){
        char* ptr = NULL;
        size_t i=0;
        if(from == to ){
            ptr= malloc(sizeof(char) * 2);

        }else{
            ptr= malloc(sizeof(char) * (to-from +1));

        }
        if(!ptr)
            return NULL;
        while(from <= to){
            ptr[i++] = *from;
            from++;
        }
        ptr[i] = '\0';
        return ptr;
}

char **fill(char **ptr,char const *s, char c){
        size_t counter =count_words(s,c);
        char* from = NULL;
        char* to = NULL;
        int isstart=1;

        size_t i =0;
        size_t j=0;
        while(j<counter){
            while (s[i] == c)
                 i++;

            while(s[i]!=c && s[i]){
                if(isstart){
                    from = &((char *)s)[i];
                    isstart=0;
                }
                i++;
            }
            to = &((char *)s)[i-1];
            ptr[j++]=allocat(from,to);
            isstart=1;
            i++;
        }
        ptr[j]= NULL;
        return ptr;
}

char **ft_split(char const *s, char c){
        if (!s)
            return NULL;

        char** ptr = NULL;
        size_t words = count_words(s,c);
        ptr = malloc(sizeof(char *) * (words+1));
        if(!ptr){
                return NULL;
        }
        return fill(ptr,s,c);
}